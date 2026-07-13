#include <iostream>
#include <memory>
#include "dog.h"



int main(){

    //shared pointers to fundamental types
    
    {

        std::shared_ptr<int> int_ptr_1 {new int{20}};
        
        std::cout << "The pointed to value is : " << *int_ptr_1 << std::endl;
        *int_ptr_1 = 40; // Use the pointer to assign
        std::cout << "The pointed to value is : " << *int_ptr_1 << std::endl;
        std::cout << "Use count : " << int_ptr_1.use_count() << std::endl; //1

        /*
        The pointed to value is : 20
        The pointed to value is : 40
        Use count : 1
        */

        std::cout << "---------------------------------------------" << std::endl;

        //Copying

        std::shared_ptr<int> int_ptr_2 = int_ptr_1; // Use count : 2
        
        std::cout << "The pointed to value is (through int_ptr2)  : " << *int_ptr_2 << std::endl;
        *int_ptr_2 = 70;
        std::cout << "The pointed to value is (through int_ptr2) : " << *int_ptr_2 << std::endl;
        
        std::cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << std::endl;
        std::cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << std::endl;

        /*
        The pointed to value is (through int_ptr2)  : 40
        The pointed to value is (through int_ptr2) : 70
        Use count for int_ptr_1 : 2
        Use count for int_ptr_2 : 2
        */

        //Other ways to initialize shared pointers
        std::cout << "---------------------------------------------" << std::endl;

        std::shared_ptr<int> int_ptr_3; // nullptr
        int_ptr_3 = int_ptr_1; // Use count : 3

        std::shared_ptr<int> int_ptr_4{nullptr};
        int_ptr_4 = int_ptr_1; // Use count : 4
        
        std::shared_ptr<int> int_ptr_5{int_ptr_1}; // Use count : 5
        
         std::cout << "The pointed to value is (through int_ptr5)  : " << *int_ptr_5 << std::endl;
        *int_ptr_5 = 100;

        std::cout << "The pointed to value is (through int_ptr1) : " << *int_ptr_1 << std::endl;
        std::cout << "The pointed to value is (through int_ptr2) : " << *int_ptr_2 << std::endl;
        std::cout << "The pointed to value is (through int_ptr3) : " << *int_ptr_3 << std::endl;
        std::cout << "The pointed to value is (through int_ptr4) : " << *int_ptr_4 << std::endl;
        std::cout << "The pointed to value is (through int_ptr5) : " << *int_ptr_5 << std::endl;
        
        std::cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << std::endl;
        std::cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << std::endl;
        std::cout << "Use count for int_ptr_3 : " << int_ptr_3.use_count() << std::endl;
        std::cout << "Use count for int_ptr_4 : " << int_ptr_4.use_count() << std::endl;
        std::cout << "Use count for int_ptr_5 : " << int_ptr_5.use_count() << std::endl;

        /*
        The pointed to value is (through int_ptr5)  : 70
        The pointed to value is (through int_ptr1) : 100
        The pointed to value is (through int_ptr2) : 100
        The pointed to value is (through int_ptr3) : 100
        The pointed to value is (through int_ptr4) : 100
        The pointed to value is (through int_ptr5) : 100
        Use count for int_ptr_1 : 5
        Use count for int_ptr_2 : 5
        Use count for int_ptr_3 : 5
        Use count for int_ptr_4 : 5
        Use count for int_ptr_5 : 5
        */

        //Use a shared pointer to manage an already existing piece of memory
        std::cout << "X-----" << std::endl;



        std::cout << "Use a shared pointer to manage an already existing piece of memory :" << std::endl;
        int * int_ptr_raw = new int(33);
        
        std::shared_ptr<int> int_ptr_6 {int_ptr_raw};
        int_ptr_raw = nullptr;
        std::cout << "The value pointed to by int_ptr_raw is (through int_ptr_6) : " << *int_ptr_6 << std::endl;
        std::cout << "Use count for int_ptr_6 is : " << int_ptr_6.use_count() << std::endl;
        std::cout << "raw pointer : " << int_ptr_raw << std::endl;
        std::cout << "int_ptr_6.get() : " << int_ptr_6.get() << std::endl;

        /*
        Use a shared pointer to manage an already existing piece of memory :
        The value pointed to by int_ptr_raw is (through int_ptr_6) : 33
        Use count for int_ptr_6 is : 1
        raw pointer : 0000000000000000
        int_ptr_6.get() : 000001FB8AB76900
        */

        //Reset : decrements the use count and sets the pointer to nullptr
        std::cout << std::endl;
        std::cout << "Reset..." << std::endl;
        int_ptr_5.reset(); // decrements reference count and sets int_ptr5 to nullptr
                        // after this if you show use count, for int_ptr5,you'll get 0
        std::cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << std::endl;
        std::cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << std::endl;
        std::cout << "Use count for int_ptr_3 : " << int_ptr_3.use_count() << std::endl;
        std::cout << "Use count for int_ptr_4 : " << int_ptr_4.use_count() << std::endl;
        std::cout << "Use count for int_ptr_5 : " << int_ptr_5.use_count() << std::endl;
        std::cout << "int_ptr_5.get() : " << int_ptr_5.get() << std::endl;


        /*
        Reset...
        Use count for int_ptr_1 : 4
        Use count for int_ptr_2 : 4
        Use count for int_ptr_3 : 4
        Use count for int_ptr_4 : 4
        Use count for int_ptr_5 : 0
        int_ptr_5.get() : 0000000000000000  
        */  


         //Can get the raw pointer address and use the ptr in if statements (castable to bool)
		std::cout << std::endl;
		std::cout << "Casting to bool and using in if statements..." << std::endl;
        std::cout << "int_ptr_4 : " << int_ptr_4 << std::endl;
        std::cout << "int_ptr_4.get() : " << int_ptr_4.get() << std::endl;
		std::cout << std::boolalpha;
        std::cout << "int_ptr_4->bool : " << static_cast<bool>(int_ptr_4) << std::endl;
        std::cout << "int_ptr_5->bool : " << static_cast<bool>(int_ptr_5) << std::endl;
        
        if(int_ptr_4){
            std::cout << "int_ptr_4 pointing to something valid" << std::endl;
        }else{
            std::cout << "int_ptr_4 pointing to nullptr" << std::endl;
        }


        std::cout << "Resetting the pointers... " << std::endl;
        int_ptr_4.reset();
        int_ptr_3.reset();
        int_ptr_2.reset();
        int_ptr_1.reset();
        std::cout << "Use count for int_ptr_1 : " << int_ptr_1.use_count() << std::endl;
        std::cout << "Use count for int_ptr_2 : " << int_ptr_2.use_count() << std::endl;
        std::cout << "Use count for int_ptr_3 : " << int_ptr_3.use_count() << std::endl;
        std::cout << "Use count for int_ptr_4 : " << int_ptr_4.use_count() << std::endl;
        std::cout << "Use count for int_ptr_5 : " << int_ptr_5.use_count() << std::endl;

        /*
        Casting to bool and using in if statements...
        int_ptr_4 :       000001FB8AB774C0
        int_ptr_4.get() : 000001FB8AB774C0
        int_ptr_4->bool : true
        int_ptr_5->bool : false
        int_ptr_4 pointing to something valid
        Resetting the pointers...
        Use count for int_ptr_1 : 0
        Use count for int_ptr_2 : 0
        Use count for int_ptr_3 : 0
        Use count for int_ptr_4 : 0
        Use count for int_ptr_5 : 0
*/
        std::cout << "Y-----" << std::endl;

    }
    


   //Shared pointers with custom types
   
   {
		std::shared_ptr<Dog> dog_ptr_1{ new Dog("Dog1")};
        dog_ptr_1->print_info();
        
        std::cout << "Use count : " << dog_ptr_1.use_count() << std::endl;
        
        std::shared_ptr<Dog> dog_ptr_2 = dog_ptr_1; // Use count : 2
        
        std::cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << std::endl;

		//Initializing
        std::cout << std::endl;
		std::cout << "Initializing..." << std::endl;
        std::shared_ptr<Dog> dog_ptr_3;
        dog_ptr_3 = dog_ptr_1; // Use count : 3

        std::shared_ptr<Dog> dog_ptr_4{nullptr};
        dog_ptr_4 = dog_ptr_1; // Use count : 4
        
        std::shared_ptr<Dog> dog_ptr_5{dog_ptr_1}; // Use count : 5
          
        std::cout << std::endl;
        dog_ptr_1->print_info();
        dog_ptr_2->print_info();
        dog_ptr_3->print_info();
        dog_ptr_4->print_info();
        dog_ptr_5->print_info();

        std::cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_3 : " << dog_ptr_3.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_4 : " << dog_ptr_4.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_5 : " << dog_ptr_5.use_count() << std::endl;
        
        /*
        Constructor for dog Dog1 called.
        Dog [ name : Dog1 ]
        Use count : 1
        Use count for dog_ptr_1 : 2
        Use count for dog_ptr_2 : 2

        Initializing...

        Dog [ name : Dog1 ]
        Dog [ name : Dog1 ]
        Dog [ name : Dog1 ]
        Dog [ name : Dog1 ]
        Dog [ name : Dog1 ]
        Use count for dog_ptr_1 : 5
        Use count for dog_ptr_2 : 5
        Use count for dog_ptr_3 : 5
        Use count for dog_ptr_4 : 5
        Use count for dog_ptr_5 : 5
        */



        //Can also initialize from an already existing raw pointer
        
        std::cout << std::endl;
		std::cout << "Initializing from already existing raw pointer" << std::endl;
        
        Dog * dog_ptr_raw = new Dog("Ralso");
        std::shared_ptr<Dog> dog_ptr_6 {dog_ptr_raw};
        dog_ptr_raw = nullptr;

        dog_ptr_6->print_info();
        std::cout << "Use count for dog_ptr_6 is : " << dog_ptr_6.use_count() << std::endl;
        std::cout << "dog_ptr_raw : " << dog_ptr_raw << std::endl;


        /*
        Initializing from already existing raw pointer
        Constructor for dog Ralso called.
        Dog [ name : Ralso ]
        Use count for dog_ptr_6 is : 1
        dog_ptr_raw : 0000000000000000
*/

       //Reset : decrements the use count and sets the pointer to nullptr
        std::cout << std::endl;
        std::cout << "Resetting" << std::endl;
        dog_ptr_5.reset(); // decrements reference count and sets int_ptr5 to nullptr
                        // after this if you show use count, for int_ptr5,you'll get 0
        std::cout << "Use count for dog_ptr_1 : " << dog_ptr_1.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_2 : " << dog_ptr_2.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_3 : " << dog_ptr_3.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_4 : " << dog_ptr_4.use_count() << std::endl;
        std::cout << "Use count for dog_ptr_5 : " << dog_ptr_5.use_count() << std::endl;
		
		
        //Can get the raw pointer address and use the ptr in if statements
		std::cout << std::endl;
		std::cout << "Casting to bool and using in if statements..." << std::endl;
        std::cout << "dog_ptr_4 : " << dog_ptr_4 << std::endl;
        std::cout << "dog_ptr_4.get() : " << dog_ptr_4.get() << std::endl;
        std::cout << "dog_ptr_4->bool : " << static_cast<bool>(dog_ptr_4) << std::endl;
        std::cout << "dog_ptr_5->bool : " << static_cast<bool>(dog_ptr_5) << std::endl;
        
        if(dog_ptr_5){
            std::cout << "dog_ptr_5 pointing to something valid" << std::endl;
        }else{
            std::cout << "dog_ptr_5 pointing to nullptr" << std::endl;
        }

        /*
        Resetting
        Use count for dog_ptr_1 : 4
        Use count for dog_ptr_2 : 4
        Use count for dog_ptr_3 : 4
        Use count for dog_ptr_4 : 4
        Use count for dog_ptr_5 : 0

        Casting to bool and using in if statements...
        dog_ptr_4 : 00000246AEFD40D0
        dog_ptr_4.get() : 00000246AEFD40D0
        dog_ptr_4->bool : true
        dog_ptr_5->bool : false
        dog_ptr_5 pointing to nullptr
        Destructor for dog Ralso called
        Destructor for dog Dog1 called
        */
   }
   


   //make_shared
   {
		std::shared_ptr<int> int_ptr_6 = std::make_shared<int>(55);
        std::cout << "The value pointed to by int_ptr_6 is : " << *int_ptr_6 << std::endl;
        
        std::shared_ptr<Dog> dog_ptr_6 = std::make_shared<Dog>("Salz");
        dog_ptr_6->print_info();
        
        std::cout << "int_ptr_6 use count : " << int_ptr_6.use_count() << std::endl;//1
        std::cout << "dog_ptr_6 use count : " << dog_ptr_6.use_count() << std::endl;//1


		//Share the object(data) with other shared_ptr's
        std::cout << std::endl;
        std::cout << "Share the object(data) with other shared_ptr's" << std::endl;
        std::shared_ptr<int> int_ptr_7 {nullptr};
        int_ptr_7 = int_ptr_6;
        
        std::shared_ptr<Dog> dog_ptr_7 {nullptr};
        dog_ptr_7 = dog_ptr_6;
        
        std::cout << "int_ptr6 use count : " << int_ptr_6.use_count() << std::endl;
        std::cout << "dog_ptr6 use count : " << dog_ptr_6.use_count() << std::endl;


        std::cout << std::endl;
        std::cout << "Reset ptr6's" << std::endl;
        int_ptr_6.reset(); // decrement reference count, and set int_ptr6 to nullptr
                            // if reference count is zero, release the managed memory
        dog_ptr_6.reset();
        std::cout << "int_ptr_6 use count : " << int_ptr_6.use_count() << std::endl;
        std::cout << "dog_ptr_6 use count : " << dog_ptr_6.use_count() << std::endl;
		std::cout << "int_ptr_7 use count : " << int_ptr_7.use_count() << std::endl;
        std::cout << "dog_ptr_7 use count : " << dog_ptr_7.use_count() << std::endl;
        
        /*
        The value pointed to by int_ptr_6 is : 55
        Constructor for dog Salz called.
        Dog [ name : Salz ]
        int_ptr_6 use count : 1
        dog_ptr_6 use count : 1

        Share the object(data) with other shared_ptr's
        int_ptr6 use count : 2
        dog_ptr6 use count : 2

        Reset ptr6's
        int_ptr_6 use count : 0
        dog_ptr_6 use count : 0
        int_ptr_7 use count : 1
        dog_ptr_7 use count : 1
        Destructor for dog Salz called
        */
   }

    return 0;
}
