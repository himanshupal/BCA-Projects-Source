/* Program to demonstrate working of Class with friend function. */

#include <iostream>
using namespace std;

class test
{
private:
    int num1, num2;

public:
    void get_data(int i, int j)
    {
        num1 = i;
        num2 = j;
    }
    friend int mean(test);
};

int mean(test obj)
{
    return (obj.num1 + obj.num2) / 2;
}

int main(int argc, char const *argv[])
{
    test ob;
    int num1, num2;

    cout << "Enter First No.: ";
    cin >> num1;
    cout << "Enter Second No.: ";
    cin >> num2;
    ob.get_data(num1, num2);
    cout << "Average of " << num1 << " & " << num2 << " is: " << mean(ob);
    return 0;
}
