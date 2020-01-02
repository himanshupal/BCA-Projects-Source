/* C++ Program to Check if a number is Prime or Not. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, temp;
    bool state = true;
    cout << "Enter a Number: ";
    cin >> num;
    for (int i = 2; i <= num / 2; i++)
    {
        temp = num % i;
        if (temp == 0)
            state = false;
    }
    if (state) cout << num << " is Prime." << endl;
    else cout << num << " is Not Prime." << endl;
    system("pause");
    return 0;
}
