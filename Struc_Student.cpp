/* C++ Program to Store Data of N students into an Array of Structure. */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    struct student{
        int roll;
        int marks;
        string name;
    };
    int num;
    cout << "Enter the number of Students: ";
    cin >> num;
    student st[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter Student " << i + 1 << " Roll number: ";
        cin >> st[i].roll;
        cout << "Enter Student " << i + 1 << " Name: ";
        cin >> st[i].name;
        cout << "Enter Student " << i + 1 << " Marks: ";
        cin >> st[i].marks;
    }
    system("cls");
    cout<< "Insertion Complete !!!" << endl;
    system("pause");
    for (int i = 0; i < num; i++) {
        cout << "Student " << i + 1 << " Roll No. : " << st[i].roll << endl;
        cout << "Student " << i + 1 << " Name : " << st[i].name << endl;
        cout << "Student " << i + 1 << " Marks : " << st[i].marks << endl << endl;
    }
    system("pause");
    return 0;
}

