#include <iostream>
#include <bitset>


int main(){

	unsigned short int value {0xff0u};

	std::cout << "Size of short int " << sizeof(short int) <<  std::endl;//  16 bits
	
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;


    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;


    //Shift by multiple bits in one go
    //Shift right by four bits 
    value = static_cast<unsigned short int>(value >> 4);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;



    //
    std::cout << "value : " << (value >> 1) << std::endl;
   
    return 0;
}
/*
Size of short int 2
value : 0000111111110000, dec : 4080
value : 0001111111100000, dec : 8160
value : 0011111111000000, dec : 16320
value : 0111111110000000, dec : 32640
value : 1111111100000000, dec : 65280
value : 1111111000000000, dec : 65024
value : 0111111100000000, dec : 32512
value : 0000011111110000, dec : 2032
value : 1016
*/
