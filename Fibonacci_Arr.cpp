#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int terms, base;
    cout << "Generate how many terms of Fibonacci Sequence: ";
    cin >> terms;
    int arr[terms];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 1; i < terms; i++)
    {
        arr[i + 1] = arr[i] + arr[i - 1];
    }
    cout << "First " << terms << " terms of Fibonacci sequence are:";
    for (int i = 0; i < terms; i++)
    {
        cout << " " << arr[i];
    }
    cout << "." << endl;
    system("pause");
    return 0;
}
