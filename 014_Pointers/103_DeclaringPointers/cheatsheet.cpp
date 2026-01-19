/************************************************************
 *               C++ POINTER CHEAT SHEET
 ************************************************************/

/*----------------------------------------------------------
  1. Basics
----------------------------------------------------------*/
int x = 10;
int* p = &x;        // pointer stores address of x
*p = 20;            // dereference: modifies x

// p  -> address
// *p -> value at address


/*----------------------------------------------------------
  2. Null Pointers (always initialize)
----------------------------------------------------------*/
int* p0 = nullptr;  // safe default
// *p0;             // X undefined behavior


/*----------------------------------------------------------
  3. const Correctness (read right-to-left)
----------------------------------------------------------*/
const int* p1;      // pointer to const int (can't modify *p1)
int* const p2 = &x; // const pointer (can't change p2)
const int* const p3 = &x; // neither can change


/*----------------------------------------------------------
  4. Arrays & Pointers
----------------------------------------------------------*/
int arr[5]{1,2,3,4,5};
int* pa = arr;      // arr decays to &arr[0]

pa[2];              // same as arr[2]
*(pa + 2);          // same as arr[2]


/*----------------------------------------------------------
  5. Pointer Arithmetic
----------------------------------------------------------*/
pa + 1;             // next element (NOT next byte)
pa - 1;

int* pbegin = arr;
int* pend   = arr + 5;

#include <cstddef>
std::ptrdiff_t d = pend - pbegin; // signed difference


/*----------------------------------------------------------
  6. Swapping Pointers (O(1))
----------------------------------------------------------*/
int a[3]{1,2,3};
int b[3]{4,5,6};

int* pa0 = a;
int* pb0 = b;

int* temp = pa0;
pa0 = pb0;
pb0 = temp;
// data unchanged, pointers swapped


/*----------------------------------------------------------
  7. Pointers vs References
----------------------------------------------------------*/
int y = 5;
int& r = y;         // reference (must bind)
int* py = &y;       // pointer (can be null)

// references:
// - cannot be null
// - cannot rebind
// - auto-dereference


/*----------------------------------------------------------
  8. Function Parameters
----------------------------------------------------------*/
void f1(int* p);    // optional, may be nullptr
void f2(int& r);    // required, always valid


/*----------------------------------------------------------
  9. Dynamic Memory (avoid raw when possible)
----------------------------------------------------------*/
int* pd = new int(42);
delete pd;

int* parr = new int[10];
delete[] parr;


/*----------------------------------------------------------
  10. Modern C++ (preferred)
----------------------------------------------------------*/
#include <memory>
#include <vector>

auto up = std::make_unique<int>(5);
auto sp = std::make_shared<int>(5);

std::vector<int> v{1,2,3};


/*----------------------------------------------------------
  11. sizeof Gotcha
----------------------------------------------------------*/
sizeof(arr);        // size of entire array
sizeof(pa);         // size of pointer only


/*----------------------------------------------------------
  12. Common Bugs ❌
----------------------------------------------------------*/
// int* bad;        // uninitialized
// *bad = 3;        // UB
//
// delete pd;
// *pd = 7;         // use-after-free
//
// pa = arr + 10;   // out of bounds


/*----------------------------------------------------------
  13. Rule of Thumb
----------------------------------------------------------*/
// Sizes / counts        -> size_t
// Pointer differences  -> std::ptrdiff_t
// Ownership            -> smart pointers
// Required parameter   -> reference
// Optional parameter   -> pointer


/************************************************************
 *  pointer = address
 * *pointer = value at address
 ************************************************************/

// ------------------------------------------------------------------------ Arrays and Pointers -------------------------------------

/************************************************************
 *        C++ POINTERS & ARRAYS — ONE-PAGE CHEAT SHEET
 ************************************************************/

/*----------------------------------------------------------
  1. Arrays decay to pointers
----------------------------------------------------------*/
int arr[5]{1,2,3,4,5};

int* p = arr;           // same as &arr[0]
int* p0 = &arr[0];      // explicit

// arr  -> type: int[5]
// p    -> type: int*

// arr itself is NOT a pointer and cannot be reassigned
// arr = p;            // X illegal


/*----------------------------------------------------------
  2. Indexing equivalence
----------------------------------------------------------*/
// All are identical:
arr[2];
p[2];
*(arr + 2);
*(p + 2);

// Weird but valid:
2[arr];   // same as arr[2]


/*----------------------------------------------------------
  3. Pointer arithmetic rules
----------------------------------------------------------*/
// Pointer arithmetic is scaled by element size
p + 1;    // moves sizeof(int) bytes
p + n;    // moves n elements

// Only valid within the same array (or one-past-end)
int* begin = arr;
int* end   = arr + 5;   // one past last element (OK)

// *(end) = ❌ undefined behavior


/*----------------------------------------------------------
  4. One-past-the-end rule
----------------------------------------------------------*/
int* last = arr + 4;    // points to arr[4]
int* past = arr + 5;    // legal address, illegal dereference

// for iteration:
for (int* it = begin; it != end; ++it) {
    // *it is valid
}


/*----------------------------------------------------------
  5. sizeof vs pointers
----------------------------------------------------------*/
sizeof(arr);            // 5 * sizeof(int)
sizeof(p);              // sizeof(int*)

// Inside functions:
void foo(int a[]) {
    sizeof(a);          // ❌ pointer size, NOT array size
}

void bar(int* a) {
    sizeof(a);          // pointer size
}


/*----------------------------------------------------------
  6. Passing arrays to functions
----------------------------------------------------------*/
void f1(int* a);        // preferred
void f2(int a[]);       // same as int*
void f3(int a[5]);      // still int*

// To preserve size:
template <size_t N>
void f4(int (&a)[N]);   // reference to array (size known)


/*----------------------------------------------------------
  7. Multidimensional arrays
----------------------------------------------------------*/
int mat[3][4];

int (*pm)[4] = mat;     // pointer to array of 4 ints

pm[1][2];               // mat[1][2]
*(*(pm + 1) + 2);       // same

// int** ❌ NOT compatible with int[3][4]


/*----------------------------------------------------------
  8. Pointer to array vs array of pointers
----------------------------------------------------------*/
int (*pa)[5];           // pointer to array of 5 ints
int* ap[5];             // array of 5 int pointers


/*----------------------------------------------------------
  9. Swapping arrays via pointers (O(1))
----------------------------------------------------------*/
int a[3]{1,2,3};
int b[3]{4,5,6};

int* pa0 = a;
int* pb0 = b;

std::swap(pa0, pb0);    // swap views, not data


/*----------------------------------------------------------
 10. Pointer difference
----------------------------------------------------------*/
#include <cstddef>

std::ptrdiff_t diff = (arr + 5) - arr; // == 5
// signed → safe for backward movement


/*----------------------------------------------------------
 11. Const arrays and pointers
----------------------------------------------------------*/
const int ca[3]{1,2,3};

const int* pc = ca;     // OK
// pc[0] = 5;           // ❌ read-only

int* const cp = arr;    // pointer can't change
cp[0] = 9;              // OK


/*----------------------------------------------------------
 12. Common array-pointer bugs ❌
----------------------------------------------------------*/
// int* bad = arr + 10;     // out of bounds
// *(arr + 5);             // one-past-end dereference
// delete[] arr;           // ❌ stack memory
// int** pp = mat;         // ❌ wrong type


/*----------------------------------------------------------
 13. Rule of Thumb
----------------------------------------------------------*/
// - Arrays decay to pointers when passed to functions
// - Pointer arithmetic counts ELEMENTS, not bytes
// - Use references to arrays if size matters
// - Prefer std::array / std::vector in modern C++


/************************************************************
 *  array  -> owns memory
 *  pointer-> views memory
 ************************************************************/

