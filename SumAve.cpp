/* C++ Program to Sum & Average of 3 Numbers. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int num1, num2, num3, sum; float avg;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Enter Third Numbber: ";
    cin >> num3;
    sum = num1 + num2 + num3;
    avg = sum / 3;
    cout << "Sum of above No's is: " << sum << " & Average is: " << avg << endl;
    system("pause");
    return 0;
}
