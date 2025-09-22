#include <iostream>
using namespace std;

template <typename T>
void printelements(T a){
    cout<< a << endl;


}

int main(){
    printelements(5);
    printelements("something");
    printelements(6.7);

    return 0;
}