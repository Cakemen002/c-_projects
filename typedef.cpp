#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// OR
using text_t = std::string;

// typedef int number_t;
// OR 
using number_t = int;

int main(){

    using std::cout;
    using std::endl;

    // pairlist_t pair_list;
    text_t my_name = "Jeremy";
    number_t age = 21;

    cout << my_name << " " << age << endl;

    return 0;
}