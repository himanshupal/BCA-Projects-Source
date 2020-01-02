/* C++ Program to Implement a Simple Calculator. */
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[]) {
    float x, y, res; char ch; bool repeat;
    cout << "Enter Smaller No: ";
    cin >> x;
    cout << "Enter Larger No. ";
    cin >> y;
    do {
        repeat = false;
        cout << "What operation do you want to perform ( + , - , * , / ): ";
        cin >> ch;
        switch (ch) {
        case '+':
            res = x + y;
            break;
        case '-':
            res = y - x;
            break;
        case '*':
            res = x * y;
            break;
        case '/':
            res = y / x;
            break;
        default:
            cout << "Wrong Selection ! Choose Again !!!\n";
            repeat = true;
            break;
        }
    } while (repeat);
    cout << "Result is " << res << endl;
    system("pause");
    return 0;
}
