#include <iostream>
using namespace std;
class B;
class A
{


public:
    int num1;
    void input(int n)
    {
        num1 = n;
    }

    friend void greatest(A, B);
};

class B
{
    int num2;

public:
    void input(int n)
    {
        num2 = n;
    }
    friend void greatest(A, B);
};

void greatest(A obj1, B obj2)
{
    if (obj1.num1 > obj2.num2)
    {
        cout << obj1.num1 << " is greatest" << endl;
    }
    if (obj1.num1==obj2.num2)
    {
        cout<<"both are equal";
    }
    else{
        cout<<obj2.num2<<" is greatest"<<endl;
    }
    

}

int main(){
    A obj1;
    B obj2;
    obj1.input(45);
    obj2.input(485);

    greatest(obj1,obj2);
}