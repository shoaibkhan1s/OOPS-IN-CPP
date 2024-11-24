#include <iostream>
using namespace std;

class complex
{
    float real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(float value)
    {
        real = value;
        img = value;
    }
    complex(float r, float i)
    {
        real = r;
        img = i;
    }
    complex add(const complex &c)
    {
        return complex(real + c.real, img + c.img);
    }
    void display()
    {
        cout << real << "+" << img << "i" << endl;
        ;
    }
};

int main()
{
    complex c1;
    cout << "Complex number c1 (default constructor): ";
    c1.display();

    complex c2(5);
    cout << "Complex number c2 : ";
    c2.display();

    complex c3(3, 4);
    cout << "Complex number c3 : ";
    c3.display();

    complex c4 = c2.add(c3);
    cout << "sum is : ";
    c4.display();
}