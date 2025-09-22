#include <iostream>
#include <utility>
using namespace std;


template <typename T, typename... Args>
T makeObject(Args... rest){
    return T(std::forward<Args>(rest)...);

}

class Person {
    std::string name;
    int age;
public:
    Person(std::string n, int a) : name(std::move(n)), age(a) {}

    void print()const{
        cout<<name<<" "<< age<<endl;
    }

};
int main(){
    auto person = makeObject<Person>("Alice", 25);
    person.print();
}
