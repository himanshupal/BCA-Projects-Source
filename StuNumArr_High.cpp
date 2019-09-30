#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int top = 0, max;
    cout << "Enter Number of Students: ";
    cin >> max;
    int num[max];
    for (int i = 0; i < max; i++)
    {
        cout << "Enter Student " << i + 1 << " marks: ";
        cin >> num[i];
        if (num[i] > top)
            top = num[i];
    }
    cout << "Highest marks are: " << top << endl;
    system("pause");
    return 0;
}
