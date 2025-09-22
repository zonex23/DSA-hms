#include <iostream>
using namespace std;

template <typename T>
class Range{
private:
T Start;
T End;
public:
    Range(T start, T end) : Start(start), End(end){}

    void contains(const T& value){
        if (value > Start && value < End){
            cout<<"Value is in the range"<<endl;
        }
        else{
            cout<<"Value is not in the range"<<endl;
        }
    }

    T length()const{
        return Start - End;
    }

    void print()const{
        cout<<"The range"<<endl;
        cout<<"Start: " << Start<<endl;
        cout<<"End: " << End << endl;
    }

};

int main() {
    Range<int> r1(10, 20);
    r1.print();
    r1.contains(15);
    r1.contains(25);
    cout << "Len: " << r1.length() << endl;

    cout << endl;

    Range<double> r2(1.5, 3.7);
    r2.print();
    r2.contains(2.2);
    r2.contains(4.0);
    cout << "Len: " << r2.length() << endl;

    cout << endl;

    Range<char> r3('a', 'f');
    r3.print();
    r3.contains('c');
    r3.contains('z');
    cout << "Len: " << (r3.length()) << endl;

    return 0;
}
