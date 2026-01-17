#include <iostream>


int main() {

	//---------Declare array
	//char message [5]  {"Hello"}; // string literals always include a null terminator '\0'
	char message[5]{ 'H','e','l','l','o' };

	//int data[5] {1,2,3,3,3};
	//std::cout << "data : " << data << std::endl;

	//Print out the array through looping
	std::cout << "message : ";
	for (auto c : message) {
		std::cout << c;
	}
	std::cout << std::endl;

	//Change characters in our array
	message[1] = 'a';
	//Print out the array through looping
	std::cout << "message : ";
	for (auto c : message) {
		std::cout << c;
	}
	std::cout << std::endl;

	// Will probably print garbage after your char array
	//char message[5]{ 'H','e','l','l','o' };
	char message2[6]{ 'H','e','l','l','o', '\0' };
	std::cout << "message2 : " << message2 << std::endl;

	//If a character array is null terminated, it's called as C-String
	char message3[]{ 'H','e','l','l','o','\0' };
	std::cout << "message3 : " << message3 << std::endl;
	std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;


	char message4[6]{ 'H','e','l','l','o' };
	std::cout << "message4 : " << message4 << std::endl;
	std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;

	char message5[]{ 'H','e','l','l','o' }; // This is not a c string ,
	//as there is not null character
	std::cout << "message5 : " << message5 << std::endl;
	std::cout << "sizeof(message5) : " << sizeof(message5) << std::endl;

	//String literal

	char message6[]{ "Hello" };
	std::cout << "message6 : " << message6 << std::endl;
	std::cout << "sizeof(message6) : " << sizeof(message6) << std::endl;


	//Can't safely print out arrays other than those of characters
	int numbers[]{ 1,2,3,4,5 };
	std::cout << "numbers :  " << numbers << std::endl;



	return 0;


/*
	message : Hello
	message : Hallo

	message2 : Hello

	message3 : Hello
	sizeof(message3) : 6
	
	message4 : Hello
	sizeof(message4) : 6
	
	message5 : Hello╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╨τF·
	sizeof(message5) : 5
	
	message6 : Hello
	sizeof(message6) : 6
	
	numbers :  0000006180BBF618
*/
