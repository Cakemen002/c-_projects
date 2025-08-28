#include <iostream>


int main(){

    for (int i = 0;i <= 10;i++)
    {
        if (i == 3 || i == 6)
        {
            continue;
        }
        else if(i == 9)
        {
            break;
        }
        std::cout << i << '\n';
    }


    return 0;
}