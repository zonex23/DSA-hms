#include <iostream>
#include <vector>
using namespace std;


vector<int> createVectorFromInput(){
    vector <int> v;
    int x;
    cout<<"Enter the elements:" << endl;
    while (cin >> x && x != 0){
        v.push_back(x);
    }
    return v;

}

int main(){
    vector<int> v = createVectorFromInput();
    for (int i : v){
        cout<< i << " ";
    }

    return 0;
}