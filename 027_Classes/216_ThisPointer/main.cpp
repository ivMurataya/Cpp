#include <iostream>
#include <string_view>



class Dog {
public:
	Dog() = default;
	Dog(std::string_view name_param, std::string_view breed_param, int  age_param);
	~Dog();

	//Setters using Pointers
	/*
	Dog* set_dog_name(std::string_view name) {
		this->name = name;
		return this;
	}

	Dog* set_dog_breed(std::string_view breed) {
		this->breed = breed;
		return this;

	}

	Dog* set_dog_age(int age) {
		*(this->p_age) = age;
		return this;
	}
	*/


	// Setters usig References
	Dog& set_dog_name(std::string_view name) {
		this->name = name;
		return *this;
	}

	Dog& set_dog_breed(std::string_view breed) {
		this->breed = breed;
		return *this;

	}

	Dog& set_dog_age(int age) {
		*(this->p_age) = age;
		return *this;
	}

	void print_info() {
		std::cout << "Dog (" << this << ") : [ name " << name
			<< " Breed  : " << breed << " age:: " << *p_age << " ]  " << std::endl;
	}

private:
	std::string name;
	std::string breed;
	int* p_age{ nullptr };
};


Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param) {
	name = name_param;
	breed = breed_param;
	p_age = new int;
	*p_age = age_param;
	std::cout << "Dog constructor called for " << name << "at " << this << std::endl;
}

Dog::~Dog() {
	delete p_age;
	std::cout << "Dog destructor called for : " << name << " at " << this << std::endl;
}


int main() {

	Dog dog1("Dogyy1", "Shepherd", 2);
	dog1.print_info();
	/*
	dog1.set_dog_name("Pumba");
	dog1.set_dog_age(4);
	*/

	//Update Information using Pointers
	//dog1.set_dog_name("Pumba")->set_dog_breed("Wire Fox Terrier")->set_dog_age(4);


	//Update Info using Refeneces
	dog1.set_dog_name("Pumba").set_dog_breed("HOla").set_dog_age(5);
	dog1.print_info();


	std::cout << "Done  " << std::endl;

	//Destructor


	return 0;
}


/*

Dog constructor called for Dogyy1at 0000004DA378F490
Dog (0000004DA378F490) : [ name Dogyy1 Breed  : Shepherd age:: 2 ]
Dog (0000004DA378F490) : [ name Pumba Breed  : HOla age:: 5 ]
Done
Dog destructor called for : Pumba at 0000004DA378F490

*/
