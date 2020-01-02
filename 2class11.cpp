/* Program to demonstrate working of Class using multiple parameterised Constructor. */

#include <iostream>
using namespace std;

class sample
{
private:
    int num1, num2;

public:
    sample(int a)
    {
        num1 = a;
        cout << "Object with one parameter have data: " << num1 << endl;
    }
    sample(int a, int b)
    {
        num1 = a;
        num2 = b;
        cout << "Object with two parameters have data: " << num1 << " & " << num2 << "." << endl;
    }
};

int main(int argc, char const *argv[])
{
    sample obj1(5);
    sample obj2(45, 37);
    return 0;
}
