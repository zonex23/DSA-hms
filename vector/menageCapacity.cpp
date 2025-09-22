#include <iostream>
#include <vector>
using namespace std;

void manageCapacity(vector<int>& v) {
    cout << "size: " << v.size() << "\n";
    cout << "capacity: " << v.capacity() << "\n";

    v.reserve(v.size() + 500);

    for (int i = 1; i <= 500; ++i) {
        v.push_back(i);
    }
    cout << "size after 500: " << v.size() << "\n";
    cout << "capacity after 500: " << v.capacity() << "\n";
}

int main() {
    vector<int> myVector;
    manageCapacity(myVector);

    return 0;
}
