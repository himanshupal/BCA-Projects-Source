/* C++ Program to generate Reverse of a Number using Array. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[] {
    int num, arr[11], i = 0, j = 0;
    cout << "Enter any Number to find it's Reverse: ";
    cin >> num;
    while (num > 0) {
        arr[i] = num % 10;
        num /= 10;
        i++;
    }
    cout << "Reverse of above Number is ";
    while (j < i) {
        cout << arr[j];
        j++;
    }
    cout << endl;
    system("pause");
    return 0;
}
