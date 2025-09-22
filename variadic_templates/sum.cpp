#include <iostream>
using namespace std;

template <typename T>
T sum(T arg1){
    return arg1;
}
    

template <typename T, typename... Args>
T sum(T arg, Args... args){
    return arg + sum(args...);
    
}


int main(){
    cout<< sum(1, 2, 4, 5)<<endl;
    return 0;
}
