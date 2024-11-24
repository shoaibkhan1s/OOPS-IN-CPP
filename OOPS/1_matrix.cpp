#include <iostream>
using namespace std;

class matrix
{
    int row, col;

public:
    int mat[10][10];
    void dimension(int r, int c)
    {
        row = r;
        col = c;
    }

    void input()
    {
        cout << "enter element of matrix " << row << "x" << col << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << mat[i][j]<<" ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int r1, r2, c1, c2;

    if (c1!=r2)
    {
        cout<<"matrix multiplication not possible";
    }
    

    matrix mat1, mat2, result;
    cout << "enter rows and columns of matrix 1 :" << endl;
    cin >> r1 >> c1;
    mat1.dimension(r1, c1);
    mat1.input();
    cout << "enter rows and columns of matrix 2 :" << endl;
    cin >> r2 >> c2;
    mat2.dimension(r2, c2);
    mat2.input();
    result.dimension(r1,c2);

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result.mat[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                result.mat[i][j] += mat1.mat[i][k]*mat2.mat[k][j];
            }
            

        }
        
        
    }
    cout<<"resultant matrix is : \n";
    result.display();
    
}