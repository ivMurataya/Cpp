#ifndef CYLINDER_H
#define CYLINDER_H

const double PI {3.1415926535897932384626433832795};
class Cylinder {
    public : 
        //Constctors
        Cylinder() = default;
        Cylinder(double rad_param,double height_param = 5  );
        //Functions (methods)
        double volume();
        
        //Setter and getter methods
        double get_base_radius();
        double get_height();

        void set_base_radius(double rad_param);

        void set_height(double height_param);
    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};

#endif
//-------------------------------------------------------------------------------------------------------------------------------

#include "cylinder.h"
#include <iostream>
//Memberwise copy initialization
/*
Cylinder::Cylinder(double rad_param,double height_param){
    base_radius = rad_param;
    height = height_param;
    std::cout <<"Two param constructor called" << std::endl;
}
*/


//Initializer lists
Cylinder::Cylinder(double rad_param, double height_param)
      : base_radius(rad_param),   height(height_param)
{

}


//-------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include "cylinder.h"


int main(){
   Cylinder c1(5);
   std::cout << "base_rad : " << c1.get_base_radius() << std::endl;
   std::cout << "height : " << c1.get_height() << std::endl;
   std::cout << "volume : " << c1.volume() << std::endl;
    return 0;
}
