#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, sum = 0;
    cout << "Enter Number upto which you want to find sum of: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "Sum of All Numbers upto " << num << " is " << sum << endl;
    system("pause");
    return 0;
}
