#include <iostream>


int main(){

    srand(time(NULL));

    int x = rand() % 6 + 1;

    std::cout << x << '\n';

    return 0;
}