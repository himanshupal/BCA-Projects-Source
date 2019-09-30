#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, rem, sum;
    cout << "Enter a No. to find it's Complex Sum: ";
    cin >> num;
    while (num > 9)
    {
        sum = num;
        num = 0;
        while (sum > 0)
        {
            rem = sum % 10;
            sum /= 10;
            num += rem;
        }
    }
    cout << "The Complex / Repeated Sum of above Number is: " << num << endl;
    system("pause");
    return 0;
}
