/* Program to demonstrate Operator Overloading for Binary Operator. */

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
    void display()
    {
        cout << "First Param: " << num1 << ", Second Param: " << num2 << endl;
    }
    sample operator+(sample ob)
    {
        sample obj(0, 0);
        obj.num1 = num1 + ob.num1;
        obj.num2 = num2 + ob.num2;
        return obj;
    }
    ~sample()
    {
        cout << "Destructor Invoked !!!\n";
    }
};

int main(int argc, char const *argv[])
{
    sample obj1(12, 67), obj2(37, 41);
    obj1.display();
    obj2.display();
    sample obj = obj1 + obj2;
    obj.display();
    return 0;
}
