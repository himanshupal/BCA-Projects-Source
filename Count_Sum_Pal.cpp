/* C++ Program to count number of digits, sum of digits & Palindrome check. */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int num, rem, sum = 0, rev = 0, count = 0, temp;
    cout << "Enter a Number: ";
    cin >> num;
    temp = num;
    while (num > 0) {
        count++;
        rem = num % 10;
        sum += rem;
        rev = rev * 10 + rem;
        num /= 10;
    }
    cout << "Your Number " << temp << " contains " << count << " digits, Sum of all digits of that is " << sum;
    if (rev == temp) cout << " & it's a palindrome";
    cout << "." << endl;
    system("pause");
    return 0;
}
