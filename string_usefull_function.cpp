#include <iostream>


int main(){

    using std::string;
    using std::cout;
     
    string name;

    cout << "What is your name?" << '\n';

    std::getline(std::cin, name);
    if(name.empty())
    {
        cout << "Your name is empty, you cannot enter!!" << '\n';
    }
    else
    {
        cout << "Welcome " << name << '\n';
        name.clear();
        cout << "And empty name : " << name << '\n';
        name.append("Mathieu");
        cout << "Mathieu : " << name << '\n';
        cout << "at(0) -> M : " << name.at(0) << '\n';
        name.insert(0, "@");
        cout << "insert(0, @) : " << name << '\n';
        cout << "find(a) : " << name.find('a') << '\n';
        name.erase(0, 1);
        name.erase(0, 1);
        cout << "athieu : " << name << '\n';
    }

    // For more usefull function, see www.cplusplus.com/reference/string/string

    return 0;
}