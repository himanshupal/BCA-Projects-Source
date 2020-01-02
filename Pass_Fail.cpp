/* C++ Program to find number of Passed & Failed Students among N Students. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int students, percentage, pass = 0, fail = 0;
    cout << "Enter number of Students: ";
    cin >> students;
    for (int i = 0; i < students; i++) {
        cout << "Enter student " << i + 1 << " Percentage: ";
        cin >> percentage;
        if (percentage > 100) {
            i--;
            cout << "Percentage can't be greater than 100% :)" << endl;
        }
        else if (percentage >= 33 && percentage <= 100) pass++;
        else fail++;
    }
    cout << "Passed Students: " << pass << "/" << students << endl;
    cout << "Failed Students: " << fail << "/" << students << endl;
    system("pause");
    return 0;
}
