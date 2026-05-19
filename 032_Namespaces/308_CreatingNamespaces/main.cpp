#include <iostream>

const double adjustment{0.724};

double add(double x, double y) {
    return x + y;
}

namespace No_Adjust
{
    double add(double x, double y){
        return x + y;
    }     
} // namespace name

namespace Adjust
{
    double add(double x, double y){
        return x+ y - adjustment;
    }  
} // namespace Adjust

namespace No_Adjust
{
    double mult(double x, double y); // Declarations
    double div(double x, double y);
    
} // namespace No_Adjust

namespace Adjust
{
    double mult(double x, double y); // Declarations
    double div(double x, double y);    
} // namespace Adjust





int main(){


    std::cout << "Add no namestace " << add(3, 7) << std::endl;
    std::cout << "Add namestace " << Adjust::add(3, 7) << std::endl;


   double result = No_Adjust::div(12,3);
   std::cout << "No Namespace result : " << result << std::endl;

   result = Adjust::div(12, 3);
   std::cout << "Namespace result : " << result << std::endl;
    return 0;
}


namespace No_Adjust
{
    double mult(double x, double y){
        return x * y;
    }
    double div(double x, double y){
        return x / y;
    }
    
} // namespace No_Adjust

namespace Adjust
{
    double mult(double x, double y){
        return x * y - adjustment;
    }
    double div(double x, double y){
        return x / y - adjustment;
    }    
} // namespace Adjust

/*

Add no namestace 10
Add namestace 9.276
No Namespace result : 4
Namespace result : 3.276


*/
