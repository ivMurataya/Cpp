#include <iostream>

class Dog{
    friend class Cat;
public : 
    Dog(const std::string& name, int age) 
        : m_name{name},m_age{age}
    {

    }
private : 
    std::string m_name;
    int m_age;
};

class Cat{
public : 
    Cat(std::string name = "p") {

        m_name = name;
    }
    void print_dog_info(const Dog& d) const{
        std::cout << "Dog [ name : " << d.m_name << ", age : " << d.m_age << "]" << std::endl;
        std::cout << "ssss " << m_name << std::endl;

    }

private:
    std::string m_name;

};

int main(){

    Cat cat1("ds");
    
    Dog dog1("Fluffly",2);

    cat1.print_dog_info(dog1);
   
    return 0;
}

/*
Dog [ name : Fluffly, age : 2]
ssss ds
*/
