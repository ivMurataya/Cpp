#include <iostream>
#include <string>


int main(){


	//Compare (1)
    //int compare( const basic_string& str ) const noexcept;(1)
	//Compares this string to str.
    
	std::string str1{"Hello"};
    std::string str2{"World"};
    

    std::cout << std::boolalpha;
	
    std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;
    std::cout << "str1.compare(str2) : " << str1.compare(str2) << std::endl; // negative
    std::cout << "str2.compare(str1) : " << str2.compare(str1) << std::endl; // positive
    

	//Compare (2)
    //int compare( size_type pos1, size_type count1,const basic_string& str ) const; (2)
	//Compares a  substring  of this string(from pos1, going count1 positions) to str
    
	std::string str3 = "Hello";
    std::string str4{"Hello World"};
    std::cout << "Comparing 'World' to 'Hello' : " << str4.compare(6,5,str3) << std::endl;//1
   

	//Compare (3)
    //int compare( const CharT* s ) const;(4)
	//Compares this string to the null-terminated character sequence beginning 
    //at the character pointed to by s.
    std::string str5{"Hello"};
    const char* message {"World"};
    std::cout << "Comparing Hello to World : " << str5.compare(message) << std::endl;//-1
    std::cout << "Comparing Hello to World : " << str5.compare("World") << std::endl; //-1


    return 0;
}

/*

str1 : Hello
str2 : World
str1.compare(str2) : -1
str2.compare(str1) : 1
Comparing 'World' to 'Hello' : 1
Comparing Hello to World : -1
Comparing Hello to World : -1

*/
