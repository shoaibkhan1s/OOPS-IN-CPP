#include <iostream>
using namespace std;

template <typename T>
class compare
{
    T num1, num2;

public:
    compare(T a, T b)
    {
        num1 = a;
        num2 = b;
    }

    T findBigger()
    {
        return (num1 > num2) ? num1 : num2;
    }

    ~compare()
    {
        cout << "destructor to destroy object" << endl;
    }
};

int main()
{
    int m, n;
    cout << "enter two integers" << endl;
    cin >> m >> n;
    compare<int> obj1(m, n);
    cout << "bigger integer is : " << obj1.findBigger() << endl;

    float x, y;
    cout << "enter two float numbers" << endl;
    cin >> x >> y;
    compare<float> obj2(x, y);
    cout << "bigger float number is : " << obj2.findBigger() << endl;
}