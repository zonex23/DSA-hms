#include <iostream>
using namespace std;



template <typename T, typename... Args>
T FindMax(T start, Args... args){
    T max = FindMax(args...);
    return (start > max)? start:max;


}


int main(){
    cout<< FindMax(1, 3, 10, 5, -1);
    return 0;
}


//start = 1
//max = findmax(3, 10)