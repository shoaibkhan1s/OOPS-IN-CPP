#include<iostream>
using namespace std;

template <typename T>

    T square(T num){
        return num*num;
    }

    int main(){
        int intNum=5;
        float floatNum=4.23;
        double doubleNum = 4.23656;

        cout<<"square is : "<<square(intNum)<<endl;
        cout<<"square is : "<<square(floatNum)<<endl;
        cout<<"square is : "<<square(doubleNum)<<endl;
    }
