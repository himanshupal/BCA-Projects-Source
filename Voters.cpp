/* C++ Program to Get No. of Voters in a Town given their Ages. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int pop, age, i, voters = 0;
    cout << "Enter Population of Town: ";
    cin >> pop;
    i = pop;
    while (i > 0) {
        cout << "Enter Person " << (pop - i) + 1 << " age: ";
        cin >> age;
        if (age >= 18) voters++;
        i--;
    }
    cout << "Out of " << pop << " Population " << voters << " are Voters & " << pop - voters << " can't vote as they are underaged." << endl;
    system("pause");
    return 0;
}
