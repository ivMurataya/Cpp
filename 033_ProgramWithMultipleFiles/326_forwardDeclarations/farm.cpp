#include "farm.h"
#include "dog.h"

Farm::Farm()
{
}

Farm::~Farm()
{
}


void Farm::use_dog(const Dog& dog_param){
	std::cout << "Use dog function: " << std::endl;
	dog_param.print_info();
}

