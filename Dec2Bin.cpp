#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int dec, bin[32], i = 0;
    cout << "Enter Decimal No. to convert it to Binary: ";
    cin >> dec;
    while (dec > 0)
    {
        bin[i] = dec % 2;
        dec /= 2;
        i++;
    }
    cout << "Your Decimal Number in Binary is ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << bin[j];
    }
    cout << "." << endl;
    system("pause");
    return 0;
}
