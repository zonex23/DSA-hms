#include <iostream>
using namespace std;

int square(int x){
    return x * x;
}

template <typename T>
void applyAndprint(int (*func)(int), T arg){
    T res = func(arg);
    cout << res << endl;

}

template <typename T, typename... Args>
void applyAndprint(int (*func)(int), T start, Args... rest){
    int res = func(start);
    cout << res << endl;
    applyAndprint(func, rest...);


}

int main(){
    applyAndprint(square, 1, 2, 3, 4);
    return 0;
}
