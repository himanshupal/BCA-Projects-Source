/* C++ Program to get Bill amount at fixed Rates. */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    float pre_read, cur_read, units;
    cout << "Enter Previous Reading: ";
    cin >> pre_read;
    cout << "Enter Current Reading: ";
    cin >> cur_read;
    units = cur_read - pre_read;
    if(units < 200){
        cout << "Your Payable Amount is Rs. " << units * 4.50 << endl;
    }else if(units >= 200 && units < 300){
        cout << "Your Payable Amount is Rs. " << units * 5.00 << endl;
    }else if(units >= 300 && units < 400){
        cout << "Your Payable Amount is Rs. " << units * 5.50 << endl;
    }else if(units >= 400){
        cout << "Your Payable Amount is Rs. " << units * 6.00 << endl;
    }
    system("pause");
    return 0;
}
