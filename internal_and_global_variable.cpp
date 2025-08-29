#include <iostream>

int x = 0;

void print();

int main(){

    int x = 1;

    std::cout << x << '\n';
    std::cout << ::x << '\n';
    print();


    return 0;
}

void print()
{
    int x = 2;
    std::cout << x << '\n';
    std::cout << ::x << '\n';
}