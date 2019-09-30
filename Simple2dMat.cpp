#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int mat[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter element " << j+1 << " of Row " << i+1 << ": ";
            cin >> mat[i][j];
        }
    }
    cout << "Insertion Complete !" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
