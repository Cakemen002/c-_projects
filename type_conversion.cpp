#include <iostream>


int main(){

    using std::cout;
    // double x = (int)3.14;

    // char x = 100;

    // cout << (char)100;

    int correct = 8;
    int questions = 10;

    double score = correct / (double)questions * 100;

    cout << score << "%";

    return 0;
}