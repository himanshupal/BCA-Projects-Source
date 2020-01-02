/* C++ Program to Check whether a number is Perfect or Not. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int num, temp, check = 0;
    cout << "Enter the Number: ";
    cin >> num;
    for (int i = 1; i <= num / 2; i++) {
        temp = num % i;
        if (temp == 0)
            check += i;
    }
    if (num == check)
        cout << "Number is Perfect !" << endl;
    else
        cout << "Number is Not Perfect !" << endl;
    system("pause");
    return 0;
}
