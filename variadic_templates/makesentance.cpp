#include <iostream>
#include <string>
using namespace std;



string makeSentance(string arg){
    return arg;
}
template <typename... Args>
string makeSentance(string start, Args... rest){
    return start + " " + makeSentance(rest...);
}


int main(){
    cout<<makeSentance("no blood", "no trabajo");


    return 0;
}
