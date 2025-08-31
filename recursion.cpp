#include <iostream>

int factorial(int num);

int main(){

    std::cout << factorial(6);

    return 0;
}

int factorial(int num)
{
    if (num > 1){
        return factorial(num - 1) * num;
    }
    else
    {
        return 1;
    }
}