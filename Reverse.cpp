/* C++ Program to get Reverse of a Number. */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int num, rev = 0;
    cout << "Enter a Number to get it's Reverse: ";
    cin >> num;
    while(num > 0){
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    cout << "Reverse of entered number is: " << rev << endl;
    system("pause");
    return 0;
}
