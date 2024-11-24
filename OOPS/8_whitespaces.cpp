#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile)
    {
        cout << "file doesn't exist" << endl;
    }
    else
    {
        char ch;
        while (inputFile.get(ch))
        {
            if (ch != ' ' && ch != '\n' && ch != '\t' && ch != '\r' && ch != '\v')
            {
                outputFile.put(ch);
            }
        }
        cout << "whitespaces, carriage return etc. remove successfully" << endl;
    }
    inputFile.close();
    outputFile.close();
}
