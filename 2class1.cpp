/* Program to demonstrate working of Class in C++. */

#include <iostream>
using namespace std;

class employee
{
private:
    int empCode;
    string name;
    float salary;

public:
    void getdata()
    {
        cout << "Enter Employee Code: ";
        cin >> empCode;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void showdata()
    {
        system("cls");
        cout << "Employee Code: " << empCode << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(int argc, char const *argv[])
{
    employee emp;
    char ch;
    do
    {
        emp.getdata();
        emp.showdata();
        cout << "Wanna Enter more [Y/N]: ";
        cin >> ch;
    } while (ch != 'n' && ch != 'N');
    return 0;
}
