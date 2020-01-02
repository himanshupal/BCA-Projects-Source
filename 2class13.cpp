/* Program to demonstrate Operator Overloading for Unary Operator. */

#include <iostream>
using namespace std;

class sample
{
private:
    int num1, num2, num3;

public:
    sample(int a, int b, int c)
    {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    void display()
    {
        cout << "First Param: " << num1 << ", Second Param: " << num2 << ", Third Param: " << num3 << endl;
    }
    void operator-()
    {
        num1 = -num1;
        num2 = -num2;
        num3 = -num3;
    }
    ~sample()
    {
        cout << "Destructor Invoked !!!";
    }
};

int main(int argc, char const *argv[])
{
    sample obj(45, 37, 61);
    obj.display();
    -obj;
    obj.display();
    return 0;
}
