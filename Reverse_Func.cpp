#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, rev(int);
    cout << "Enter number to find Reverse of it: ";
    cin >> num;
    cout << "Reverse of " << num << " is " << rev(num) << endl;
    system("pause");
    return 0;
}
int rev(int x){
    int rev = 0;
    while(x > 0){
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}