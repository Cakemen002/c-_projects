#include <iostream>
#include <cmath>


int main(){

    using std::cout;
    using std::endl;


    double x = 2.5;
    double y = 3;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(x, y);
    // z = sqrt(x);
    // z = abs(x);
    // z = round(x);
    // z = floor(x);
    z = ceil(x);

    // For more usefull function, see www.cplusplus.com/reference/cmath

    cout << z << endl;

    return 0;
}