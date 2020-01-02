/* C++ Program to get Electric Bill amount at Variable Rates. */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    float pre_read, cur_read, units, amt = 0, i = 0;
    float rate[] = {4.5, 5.0, 5.5, 6.0, 6.5, 7.5};
    cout << "Enter Previous Reading: ";
    cin >> pre_read;
    cout << "Enter Current Reading: ";
    cin >> cur_read;
    units = cur_read - pre_read;
    while (units >= 100){
        units -= 100;
        amt += 100 * rate[i++];
        if(i==6) i--;
    }
    amt += units * rate[i];
    cout << "Your Payable Amount is Rs. " << amt << endl;
    system("pause");
    return 0;
}
