#include <iostream>
using namespace std;

template <typename T>
int countArgs(T arg){
    return 1;
}

template <typename T, typename... Args>
int countArgs(T start, Args... rest){
    return 1 + countArgs(rest...);
}

int main(){
    cout<< countArgs(1,2, 3,4 )<< endl;
}
