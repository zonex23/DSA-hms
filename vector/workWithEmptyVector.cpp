#include <iostream>
#include <vector>
using namespace std;


vector<int> workWithEmptyVector(){
    vector<int> v;
    int size = 11;
    for (int i = 1; i<size; ++i){
        v.push_back(i);
        cout<<"Size: "<<v.size()<<endl;
        cout<<"Capacity: "<<v.capacity()<<endl;
    }
    for (int i = 1; i < size; ++i ){
        cout<< i << " ";
    }
}

int main(){
    workWithEmptyVector();
}