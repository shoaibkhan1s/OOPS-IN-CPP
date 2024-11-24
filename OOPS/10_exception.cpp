#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int SIZE = 5;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int i;

    cout << "enter index for getting corresponding value \n";
    cin >> i;

    try
    {
        if (i < 0 || i >= SIZE)
        {
            throw out_of_range("Array index is out of bound");
        }
        cout << "value found at index is : \n"
             << a[i];
    }
    catch (out_of_range &e)
    {
        cout << "error : " << e.what() << endl;
    }
}