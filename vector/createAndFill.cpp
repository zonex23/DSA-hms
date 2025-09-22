#include <iostream>
#include <vector>
using namespace std;


vector<int> createAndFillVector(int N){
    vector<int> v;
    for(int i = 1; i<N; ++i){
        v.push_back(i);
    }

    cout<<"Vector's elements: "<< endl;
    for(int i = 1; i< N +1; ++i){
        cout<< i << " ";
    }
    cout<<endl;

    cout<< "size:" << " "<< v.size()<<endl;
    cout<<"capacity" << " " << v.capacity()<<endl;
}

int main(){
    int N = 15;
    vector<int> v = createAndFillVector(N);
}