#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int bin, dec = 0, rem;
    bool halt = true;
    cout << "Enter a Binary No. to convert to it's Decimal equivalent: ";
    cin >> bin;
    int i = 0;
    while (bin > 0)
    {
        rem = bin % 10;
        dec += rem * pow(2, i);
        i++;
        bin /= 10;
        if (rem != 0 && rem != 1)
        {
            cout << "The Number you have Entered is NON-BINARY !!!" << endl;
            halt = false;
            break;
        }
    }
    if (halt)
        cout << "Decimal conversion of above binary Number is: " << dec << endl;
    system("pause");

    return 0;
}
