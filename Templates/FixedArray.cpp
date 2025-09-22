#include <iostream>
using namespace std;



template <typename T, size_t N>
class FixedArray {
private:
    T arr[N];

public:
    void set(size_t index, const T& value) {
        if (index >= N) {
          cout<<"invalid index";
        }
        arr[index] = value;
    }

    
    T get(size_t index) const{
        if (index >= N) {
            cout<<"Invalid index";
        }
        return arr[index];
    }

    
    size_t size() const{
        return N;
    }
};


int main() {
    FixedArray<int, 4> intarr;
    intarr.set(2, 99);
    cout << intarr.get(2) << endl;
    cout << intarr.size() << endl;
    cout<<endl;


    FixedArray<double, 4> floatarr;
    floatarr.set(1, 4.4);
    cout<< floatarr.get(1) << endl;
    cout<<floatarr.size()<< endl;
    cout<<endl;

    FixedArray<std::string, 10> strarr;
    strarr.set(3, "something");
    cout<<strarr.get(3)<<endl;
    cout<<strarr.size()<<endl;
    


    return 0;

}