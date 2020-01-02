/* C++ Program to Generate Prime numbers upto N. */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int max, prime;
    cout << "Enter number upto which you want to generate prime no's: ";
    cin >> max;
    cout << "All prime numbers upto " << max << " are:";
    for (int j = 1; j <= max; j++){
        prime = 1;
        for (int i = 2; i <= j/2; i++)
            if (j % i == 0) prime = 0;
        if (prime == 1)
            cout << " " << j;
    }
    cout << endl;
    system("pause");
    return 0;
}
