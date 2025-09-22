#include <iostream>
using namespace std;

template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    mySwap(x, y);
    cout <<  x  <<endl<<  y << endl;

    double a = 3.14, b = 2.71;
    mySwap(a, b);
    cout  << a << endl << b << endl;

    std::string s1 = "Hello", s2 = "World";
    mySwap(s1, s2);
    cout << s1 << endl<< s2 << endl;

    return 0;
}