/* Program to demonstrate working of Class with friend function working as bridge. */

#include <iostream>
using namespace std;

class test1;
class test2;

class test1
{
private:
    int num;

public:
    void set_val(int i)
    {
        num = i;
    }
    friend int max(test1, test2);
};

class test2
{
private:
    int num;

public:
    void set_val(int i)
    {
        num = i;
    }
    friend int max(test1, test2);
};

int max(test1 obj1, test2 obj2)
{
    return ((obj1.num > obj2.num) ? obj1.num : obj2.num);
}

int main(int argc, char const *argv[])
{
    test1 ob1;
    test2 ob2;
    int num1, num2;

    cout << "Enter First No.: ";
    cin >> num1;
    cout << "Enter Second No.: ";
    cin >> num2;
    ob1.set_val(num1);
    ob2.set_val(num2);
    cout << "Maximum of " << num1 << " & " << num2 << " is: " << max(ob1, ob2);
    return 0;
}
