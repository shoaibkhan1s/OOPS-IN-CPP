#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[100];

public:
    String()
    {
        str[0] = '\0';
    }

    void input()
    {
        cout << "enter string : ";
        cin >> str;
    }

    String operator+(const String &s)
    {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void operator=(const String &s)
    {
        strcpy(str, s.str);
    }

    bool operator<=(const String &s)
    {
        return strcmp(str, s.str) <= 0;
    }

    int length()
    {
        return strlen(str);
    }

    void toLower()
    {
        for (int i = 0; str[i]; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
    }

    void toUpper()
    {
        for (int i = 0; str[i]; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
    }
    void display()
    {
        cout << str << endl;
    }
};

int main()
{
    String s1, s2, s3, s4;
    s1.input();
    s2.input();

    s3 = s1 + s2;
    s3.display();

    s4 = s1;
    cout << "string 1 is copy to string 4 \n";

    if (s1 <= s2)
    {
        cout << "s2 is greater or equal to s1\n";
    }
    else
    {
        cout << "s1 is greater \n";
    }

    cout << "lenght of s1 is : \n"
         << s1.length() << endl;
    cout << "lenght of s2 is : \n"
         << s2.length() << endl;

    s1.toLower();
    cout << "s1 in lower is : ";
    s1.display();

    s2.toLower();
    cout << "s2 in lower is : ";

    s2.display();

    s1.toUpper();
    cout << "s1 in upper is : ";

    s1.display();

    s2.toUpper();
    cout << "s2 in upper is : ";

    s2.display();
}