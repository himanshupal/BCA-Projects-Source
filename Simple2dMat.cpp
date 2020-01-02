/* C++ Program to Create & Insert data into a 2D Matrix. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int mat[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element " << j + 1 << " of Row " << i + 1 << ": ";
            cin >> mat[i][j];
        }
    cout << "Insertion Complete !" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
