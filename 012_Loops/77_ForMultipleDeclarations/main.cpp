#include <iostream>

int main(){

    for (size_t i{0} , x {5}, y{22} ; y > 15 ; ++i , x+=5 , y-=1){
        std::cout << "i: " << i << ", x : " << x << ", y : " << y << std::endl;

    }
   
    return 0;
}

/*
i: 0, x : 5, y : 22
i: 1, x : 10, y : 21
i: 2, x : 15, y : 20
i: 3, x : 20, y : 19
i: 4, x : 25, y : 18
i: 5, x : 30, y : 17
i: 6, x : 35, y : 16
*/
