#include <iostream>

void value_swap(int a, int b);
void references_swap(int &a, int &b);

int main()
{
    int x = 1;
    int y = 2;

    value_swap(x, y);

    std::cout << x << "   " << y << '\n';

    references_swap(x, y);

    std::cout << x << "   " << y << '\n';

}

void value_swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}

void references_swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}