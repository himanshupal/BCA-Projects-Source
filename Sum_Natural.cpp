#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, temp = 0, res = 0;
    cout << "Find sum of how many first Even No's ?: ";
    cin >> num;
    repeat:
        temp += 2;
        res += temp;
        if(temp < num*2)
            goto repeat;
        cout << "Sum of first " << num << " even positive integers is: " << res << endl;
        system("pause");
        return 0;
}
