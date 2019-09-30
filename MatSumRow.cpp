#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    int mat[rows][columns], sum[rows];
    for (int i = 0; i < rows; i++)
    {   
        sum[i] = 0;
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter element " << j + 1 << " of row " << i + 1 << ": ";
            cin >> mat[i][j];
            sum[i] += mat[i][j];
        }
    }
    cout << "Sum of elements of:" << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "Row " << i+1 << ": " << sum[i] << endl;
    }
    system("pause");
    return 0;
}
