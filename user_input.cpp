#include <iostream>


int main(){

    using std::cout;
    using std::cin;
    using std::string;
    using std::getline;

    string name;

    cout << "What's your name?";
    getline(cin, name);

    cout << '\n' << "Your name is " << name;

    return 0;
}