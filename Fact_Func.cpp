/* C++ Program to find factorial of a Number using Function. */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int num, fact(int);
    cout << "Enter number to find factorial of: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << fact(num) << endl;
    system("pause");
    return 0;
}
int fact(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++) fact *= i;
    return fact;
}
