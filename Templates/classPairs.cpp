#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair{
public:
    Pair(T1 t1, T2 t2) : t1(t1), t2(t2){}

    void printStuff(){
        cout<<"First value: "<< t1 <<endl << "Seecond value: "<< t2 << endl;
    }

private:
T1 t1;
T2 t2;
};


int main(){
    int value1 = 5;
    std::string value2 = "second value";
    Pair <int, std::string> p(value1, value2);
    p.printStuff();
}