#include <iostream>


int main(){
    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter ?\n";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size;i++)
    {
        std::cout << "Enter grade #" << i + 1 << "\n";
        std::cin >> pGrades[i];
    }

    // for(int i = 0;i < size;i++)
    // {
        std::cout << pGrades;
    // }

    delete[] pGrades;

    return 0;
}