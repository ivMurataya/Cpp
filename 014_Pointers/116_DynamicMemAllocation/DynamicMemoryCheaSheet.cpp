/************************************************************
 *   C++ DYNAMIC MEMORY ALLOCATION (POINTERS) — CHEAT SHEET
 ************************************************************/

/*----------------------------------------------------------
  1. Allocate a single object
----------------------------------------------------------*/
int* p = new int{42};      // allocate ONE int on the heap
*p = 10;                  // use it

delete p;                 // free memory
p = nullptr;              // prevent dangling pointer


/*----------------------------------------------------------
  2. Allocate a dynamic array
----------------------------------------------------------*/
int* arr = new int[5]{1,2,3,4,5};  // allocate array of ints

arr[2] = 10;                       // normal array usage

delete[] arr;                      // MUST match new[]
arr = nullptr;


/*----------------------------------------------------------
  3. new / delete pairing rules (CRITICAL)
----------------------------------------------------------*/
// new      -> delete
// new[]    -> delete[]
//
// Mixing them results in UNDEFINED BEHAVIOR


/*----------------------------------------------------------
  4. Allocation failure handling
----------------------------------------------------------*/
#include <new>

// Throws std::bad_alloc on failure
int* p1 = new int;

// Returns nullptr instead of throwing
int* p2 = new (std::nothrow) int;

if (p2 == nullptr) {
    // allocation failed
}


/*----------------------------------------------------------
  5. Memory leak example (what NOT to do)
----------------------------------------------------------*/
void leak() {
    int* p = new int{5};
    // delete missing -> memory leak
}


/*----------------------------------------------------------
  6. Dangling pointer
----------------------------------------------------------*/
int* p3 = new int{8};
delete p3;

// *p3 = 9;    // undefined behavior (dangling pointer)
p3 = nullptr;


/*----------------------------------------------------------
  7. Multiple pointers to the same memory
----------------------------------------------------------*/
int* a = new int{100};
int* b = a;        // both point to the same object

// delete a;
// delete b;       // double delete -> undefined behavior

delete a;
a = b = nullptr;


/*----------------------------------------------------------
  8. Ownership rule
----------------------------------------------------------*/
// Raw pointers do NOT express ownership
// C++ does not track who should delete memory


/*----------------------------------------------------------
  9. Dynamic allocation inside loops (dangerous)
----------------------------------------------------------*/
for (int i = 0; i < 100; ++i) {
    int* p = new int{i};
    delete p;      // must delete in the same iteration
}


/*----------------------------------------------------------
 10. Large allocations and virtual memory
----------------------------------------------------------*/
int* big = new (std::nothrow) int[1'000'000'000];

// Allocation may succeed even without physical RAM
// Real memory is committed only when accessed


/*----------------------------------------------------------
 11. Preferred modern C++ alternatives
----------------------------------------------------------*/
#include <memory>
#include <vector>

// Single object ownership
std::unique_ptr<int> up = std::make_unique<int>(42);

// Shared ownership
std::shared_ptr<int> sp = std::make_shared<int>(42);

// Dynamic array
std::vector<int> v(100);


/*----------------------------------------------------------
 12. When raw new/delete is acceptable
----------------------------------------------------------*/
// Low-level systems code
// Custom allocators
// Interfacing with C libraries
// Educational purposes


/*----------------------------------------------------------
 13. Mental model
----------------------------------------------------------*/
// pointer  = address
// *pointer = object at address
// new      = allocate on heap
// delete   = free heap memory


/*----------------------------------------------------------
 14. Common mistakes
----------------------------------------------------------*/
// forgetting delete
// using delete instead of delete[]
// deleting twice
// using memory after delete
// allocating huge memory repeatedly
// assuming new guarantees physical RAM


/************************************************************
 * RULE OF THUMB:
 * Every successful new must be matched with exactly
 * one delete (or delete[]).
 ************************************************************/
