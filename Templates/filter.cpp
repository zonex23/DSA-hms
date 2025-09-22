#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T* Filter(T* arr,  int size, bool (*pred)(const T&), int& newsize){
    T* temparr = new T[size];
    int count = 0;
    for(int i = 0; i <size; ++i){
        if(pred(arr[i])){
            temparr[count] = arr[i];
            count ++;
        }
    }
    newsize = count;
    T* res = new T[newsize];
    for(int i = 0; i <newsize; ++i){
        res[i] = temparr[i];
    }
   return res;

}

bool isGreaterThan3(const int& val){
    return val >3;
}

bool isGreaterThan2_4(const double& val){
    return val > 2.4;
}

bool ValidLenght(const std::string& val){
    return val.length() > 3;
}

int main(){
    int Intarr [] = {2, 5, 6, 10};
    int Intsize;
    int* intFilter = Filter(Intarr, 4, isGreaterThan3, Intsize);
    cout<<"The integers that are greater than 3 :"<<endl;
    for(int i = 0; i<Intsize; ++i) {
        cout<< intFilter[i]<< " ";


    }
    cout << endl<< endl;
    delete[] intFilter;


    double Floatarr [] = {1.5, 4.4, 6.7, 5.5, -1.5, 3.3};
    int Floatsize;
    double* FloatFilter = Filter(Floatarr, 6, isGreaterThan2_4, Floatsize);
    cout<<"The floats that are greater than 2.4:"<<endl;
    for(int i = 0; i < Floatsize; ++i){
        cout<< FloatFilter[i]<< " ";
    }
    cout<< endl<<endl;
    delete[] FloatFilter;



    std::string StrArr[] = {"some", "random", "words"};
    int StrSize;
    std::string* StrFilter = Filter(StrArr,3, ValidLenght, StrSize);
    cout<<"The strings which lenghts are > than 3"<<endl;
    for(int i = 0; i < StrSize; ++i){
        cout<< StrFilter[i]<< " ";
    }
    cout<< endl;
    delete[] StrFilter;
    return 0;
}




