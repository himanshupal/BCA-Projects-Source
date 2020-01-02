/* C++ Program to Generate N terms of Fibonacci Sequence. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int limit, current = 0, next = 1, swap;
    cout << "Enter No. of Fibonacci series terms you need: ";
    cin >> limit;
    cout << "First " << limit << " terms of Fibonacci Series are:";
    for (int i = 0; i < limit; i++) {
        cout << " " << current;
        swap = current + next;
        current = next;
        next = swap;
    }
    cout << endl;
    system("pause");
    return 0;
}
