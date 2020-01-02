/* C++ Program to Print Multiplication table from 2 to 20. */

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Tables from 2 to 20: " << endl;
    for (int i = 2; i <= 20; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << setw(3) << i * j << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
