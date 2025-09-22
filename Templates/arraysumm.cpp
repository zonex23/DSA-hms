#include <iostream>
using namespace std;

template <typename T>
T arraySum(T* arr, int size) {
    T res = T();
    for (int i = 0; i < size; i++) {
        res = res + arr[i];
    }
    return res;
}

int main() {
    std::string arr_1[] = {"sjns", "jlsn"};
    int size_1 = 2;

    int arr_2 [] = {1, 2, 3, 4,  5};
    int size_2 = 5;

    double arr_3 [] = {1.1, 3.4, 5.5, 6.7};
    int size_3 = 4;

    
    cout << "the strs summ is: " << arraySum(arr_1, size_1) << endl;
    cout << "the ints summ is: " << arraySum(arr_2, size_2) << endl;
    cout << "the floats summ is: " << arraySum(arr_3, size_3) << endl;
    
    return 0;
}