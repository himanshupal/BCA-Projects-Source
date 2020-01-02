
/* Program to demonstrate working of Class using Constructor. */

#include <iostream>
using namespace std;

class test
{
private:
    int num1 = 5, num2 = 12;

public:
    test(){
        cout << "Value of Var1: " << num1 << " & Var2: " << num2 << "." << endl;
    }
};

int main(int argc, char const *argv[])
{
    test obj;
    return 0;
}
