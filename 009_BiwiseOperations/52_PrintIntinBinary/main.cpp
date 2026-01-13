#include <iostream>
#include <bitset>


int main(){

    unsigned short int data {15};

    std::cout << "data (dec) : " <<std::showbase <<  std::dec << data << std::endl;
    std::cout << "data (oct) : " <<std::showbase <<  std::oct << data << std::endl;
    std::cout << "data (hex) : " <<std::showbase <<  std::hex << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;
   
    return 0;
} 

/*
data (dec) : 15
data (oct) : 017
data (hex) : 0xf
data (bin) : 0000000000001111
*/
