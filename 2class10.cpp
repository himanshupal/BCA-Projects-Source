/* Program to demonstrate working of Class using parameterised Constructor. */

#include <iostream>
using namespace std;

class sample
{
private:
    int num1, num2;

public:
    sample(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void showdata()
    {
        cout << "Value in Var1: " << num1 << " & Var2: " << num2 << "." << endl;
    }
};

int main(int argc, char const *argv[])
{
    int i, j;
    cout << "Enter First Value: ";
    cin >> i;
    cout << "Enter Second Value: ";
    cin >> j;
    sample obj(i, j);
    obj.showdata();
    return 0;
}
