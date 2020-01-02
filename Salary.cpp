/* C++ Program to calculate Net Pay of Employee. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    float bp, da, hra, net, code; string name;
    cout << "Enter Employee Code: ";
    cin >> code;
    cout << "Enter Employee's Name: ";
    cin >> name;
    cout << "Enter Basic Pay Rs. ";
    cin >> bp;
    da = 0.72 * bp;
    hra = 0.20 * bp;
    net = bp + da + hra;
    cout << "Employee with Code: " << code << " having Name: " << name << " has Basic Pay: " << bp << ", DA: " << da << ", HRA: " << hra << ", with Total Salary of Rs. " << net <<"/- ."<< endl;
    system("pause");
    return 0;
}
