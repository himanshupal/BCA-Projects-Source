/* C++ Program to calculate Net Pay of Employee using Structure. */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    struct employee{
        string name;
        int code;
        float bp;
    }emp;
    float da, hra, net; char ch;
    do{
        system("cls");
        cout << "Enter Employee code: ";
        cin >> emp.code;
        cout << "Enter Employee Name: ";
        cin >> emp.name;
        cout << "Enter basic pay: ";
        cin >> emp.bp;
        da = emp.bp * 0.72;
        hra = emp.bp * 0.18;
        net = emp.bp + da + hra;
        system("cls");
        cout << "Employee Code: " << emp.code << endl;
        cout << "Employee Name: " << emp.name << endl;
        cout << "Net Pay: " << net << endl;
        cout << "Press y/Y to enter more : ";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
    system("pause");
    return 0;
}
