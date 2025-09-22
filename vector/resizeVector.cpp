#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void resizeVector(vector<T>& v, size_t newSize, const T& defaultValue) {
    cout << "Before: ";
    for (const T& elem : v) {
        cout << elem << " ";
    }
    cout << "\nSize: " << v.size() << "\n";
    v.resize(newSize, defaultValue);

    cout << "\nAfter: ";
    for (const T& elem : v) {
        cout << elem << " ";
    }
    cout << "\nSize: " << v.size() << "\n";
}

int main() {
    vector<int> v = {1, 2, 3};
    resizeVector(v, 6, 1);
    return 0;
}
