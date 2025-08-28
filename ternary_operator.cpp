#include <iostream>


int main(){

    int age = 30;

    // if (age > 65){
    //     std::cout << "You are so old";
    // }else{
    //     std::cout << "You are to young";
    // }

    // Est exactement la même chose que :

    age >= 65 ? std::cout << "You are so old" : std::cout << "You are to young";

    return 0;
}