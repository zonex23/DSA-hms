#include <iostream>
#include <vector>
using namespace std;


int removeElementsGreaterThan(vector<int>& v, int threshold) {
    int removedCount = 0;
    while (v.back() > threshold) {
        v.pop_back();
        ++removedCount;
    }

    return removedCount;
}

int main() {
    vector<int> v = {1, 3, 5, 7, 9};
    int removed = removeElementsGreaterThan(v, 5);
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

