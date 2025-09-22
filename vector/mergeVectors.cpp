#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedVectors(const vector<int>& vec1, const vector<int>& vec2) {
    vector<int> x;
    size_t i = 0, j = 0;

    while (i < vec1.size() && j < vec2.size()) {
        if (vec1[i] < vec2[j]) {
            x.push_back(vec1[i++]);
        } else {
            x.push_back(vec2[j++]);
        }
    }

    while (i < vec1.size()) {
        x.push_back(vec1[i++]);
    }
    while (j < vec2.size()) {
        x.push_back(vec2[j++]);
    }

    return x;
}

int main() {
    vector<int> vec1 = {1, 3, 5, 7};
    vector<int> vec2 = {2, 4, 6, 8, 9};
    vector<int> final = mergeSortedVectors(vec1, vec2);

    cout << "merged vector: ";
    for (int val : final) {
        cout << val << " ";
    }

    return 0;
}
