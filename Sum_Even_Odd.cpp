/* C++ Program to find Sum of All Even & Odd Integers up to N. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int upto, even = 0, odd = 0;
    cout << "Enter the number upto which you want to find the sum of all Even & Odd Integers: ";
    cin >> upto;
    for (int i = 0; i <= upto; i++) {
        if (i % 2 == 0)
            even += i;
        else
            odd += i;
    }
    cout << "Sum of All Even Integers upto " << upto << " is " << even << " & Odd Integers is " << odd << endl;
    system("pause");
    return 0;
}
