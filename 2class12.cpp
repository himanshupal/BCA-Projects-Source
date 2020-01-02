/* Program to demonstrate working of Class using Constructor & Destructor. */

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
        cout << "Constructor Invoked !!!\n";
        cout << "First Param: " << num1 << " & Second Param: " << num2 << endl;
    }
    ~sample(){
        cout << "Destructor Invoked !!!";
    }
};

int main(int argc, char const *argv[])
{
    sample obj2(45, 37);
    return 0;
}
