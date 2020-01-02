/* Program to demonstrate working of Class with functions. */

#include <iostream>
using namespace std;

class student
{
private:
    int rollNo, mark1, mark2, mark3;
    string name;

public:
    void getdata();
    int calculate();
    void showdata();
};

void student::getdata()
{
    cout << "Enter Student Roll No.: ";
    cin >> rollNo;
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter marks in Subject 1: ";
    cin >> mark1;
    cout << "Enter marks in Subject 2: ";
    cin >> mark2;
    cout << "Enter marks in Subject 3: ";
    cin >> mark3;
}

int student::calculate()
{
    return mark1 + mark2 + mark3;
}

void student::showdata()
{
    system("cls");
    cout << "Student Name: " << name << endl;
    cout << "Total Marks: " << calculate() << endl;
}

int main(int argc, char const *argv[])
{
    student stu;
    char ch;
    do
    {
        stu.getdata();
        stu.showdata();
        cout << "Wanna Enter more [Y/N]: ";
        cin >> ch;
    } while (ch != 'n' && ch != 'N');
    return 0;
}
