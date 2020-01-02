/* Program to demonstrate Operator Overloading for Relational Operator. */

#include <iostream>
using namespace std;

class currency
{
private:
    int rs, ps;

public:
    currency(int a, int b)
    {
        rs = a;
        ps = b;
    }
    void display()
    {
        cout << rs << " rupees & " << ps << " paise." << endl;
    }
    bool operator>(currency ob)
    {
        rs += ps / 100;
        ob.rs += ob.ps / 100;
        return ((rs > ob.rs) ? true : false);
    }
    ~currency()
    {
        cout << "Destructor Invoked !!!" << endl;
    }
};

int main(int argc, char const *argv[])
{
    currency obj1(13, 67), obj2(37, 141);
    obj1.display();
    obj2.display();
    if (obj1 > obj2)
        cout << "First Amt. is larger." << endl;
    else
        cout << "Second Amt is larger." << endl;
    return 0;
}
