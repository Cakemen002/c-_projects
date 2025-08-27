#include <iostream>

namespace first{
    int x = 1;
}

namespace secound{

    int x = 2;

    namespace mystring{
        using std::string;
        string name = "Jeremy";
    }
}

int main(){

    using std::string;
    using std::cout;
    using std::endl;
    using secound::mystring::name;
    using namespace first;

    cout << x << endl;
    cout << first::x << endl;
    cout << secound::x << endl;

    cout << name << endl;

    return 0;
}