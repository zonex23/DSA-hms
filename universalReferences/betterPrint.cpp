#include <iostream>
using namespace std;



template <typename T>
void foo(T& l_val){
    cout<<l_val<< "[lvalue]"<<endl;
}
template <typename T>
void foo(T&& r_val){
     cout<<r_val<< "[rvalue]"<<endl;

}

template <typename T>
void betterPrint(T&& arg){
    foo(std::forward<T>(arg));
    std::forward<T>(arg);
}
    

template <typename T, typename... Args>
void betterPrint(T&& start, Args&&... rest){
    foo(std::forward<T>(start));
    betterPrint(std::forward<Args>(rest)...);
}

int main(){
    int x = 1;
    betterPrint(x, "hello", 333, "word");
}