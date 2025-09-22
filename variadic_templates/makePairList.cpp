#include <iostream>
#include <utility>
using namespace std;


template <typename T, typename U>
pair<T, U> makePairList(T arg1, U arg2){
    return make_pair(arg1, arg2);

}

template <typename T, typename... Args>
auto makePairList(T start, Args... rest){
    return make_pair(start, makePairList(rest...));
    
}


int main(){
    auto pair1 = makePairList(5, 'c');
    auto pair2 = makePairList(5, 'c', 4.32);
    auto pair3 = makePairList(1, 2, 3, 4);

    cout << pair1.first << " " << pair1.second << endl; 
    cout << pair2.first << " " << pair2.second.first << " " << pair2.second.second << endl; 
    cout << pair3.first << " " << pair3.second.second.second << endl; 

    return 0;
}

