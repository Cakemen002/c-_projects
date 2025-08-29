#include <iostream>

void bake_pizza();
void bake_pizza(std::string topping);
void bake_pizza(std::string topping1, std::string topping2);

int main(){

    bake_pizza();

    bake_pizza("peperonni");

    bake_pizza("peperonni", "cheeze");

    bake_pizza("cheeze");

    bake_pizza();



    return 0;
}

void bake_pizza()
{
    std::cout << "Here is your Pizza!!\n";
}

void bake_pizza(std::string topping)
{
    std::cout << "Here is your Pizza with " << topping << "!!\n";
}

void bake_pizza(std::string topping1, std::string topping2)
{
    std::cout << "Here is your Pizza with " << topping1 << " and " << topping2 << "!!\n";
}