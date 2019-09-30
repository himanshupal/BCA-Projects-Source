#include<iostream>
#include<conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float num, sum = 0, avg, count=0;
    char ch;
    do{
        cout << "\nEnter Number: ";
        cin >> num;
        sum += num;
        count++;
        avg = sum / count;
        cout << "Wanna Enter More Numbers ? Press (N/n) to Terminate ...";
        ch = getch();
    } while (ch != 'N' && ch != 'n');
    cout << "\nSum of Above Entered is " << sum << " & there Average is " << avg << endl;
    system("pause");
    return 0;
}
