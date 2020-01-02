/* C++ Program to find Largest, Second largest & Smallest number among N numbers. */

#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[]) {
    int smallest, largest, sLarge, num;
    char ch;
    cout << "Enter First No.: ";
    cin >> num;
    smallest = largest = sLarge = num;
    do {
        cout << "Enter Next number: ";
        cin >> num;
        if (num > largest){
            sLarge = largest;
            largest = num;
        } else if (num < smallest)
            smallest = num;
        cout << "Wanna enter more ? (Press N/n to EXIT)\n";
        ch = getch();
    } while (ch != 'n' && ch != 'N');
    system("cls");
    cout << "Largest number: " << largest << endl;
    cout << "Second Largest number: " << sLarge << endl;
    cout << "Smallest number: " << smallest << endl;
    system("pause");
    return 0;
}
