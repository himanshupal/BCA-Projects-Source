/* Program to demonstrate working of Class returning object as Result. */

#include <iostream>
using namespace std;

class length
{
private:
    int feet;
    float inch;

public:
    void get_data(int ft, float in)
    {
        feet = ft;
        inch = in;
    }
    void show_data()
    {
        cout << feet << " feets & " << inch << " inches." << endl;
    }
    length total(length l1, length l2);
};

length length::total(length l1, length l2)
{
    length l3;
    l3.feet = l1.feet + l2.feet;
    l3.inch = l1.inch + l2.inch;
    while (l3.inch > 12)
        if (l3.inch >= 12)
        {
            l3.feet++;
            l3.inch -= 12;
        }
    return l3;
}

int main(int argc, char const *argv[])
{
    length len1, len2;
    int feet;
    float inch;
    cout << "Enter Length 1: " << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inch;
    len1.get_data(feet, inch);
    cout << "Enter Length 2: " << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inch;
    len2.get_data(feet, inch);
    cout << "First Length: ";
    len1.show_data();
    cout << "Second Length: ";
    len2.show_data();
    length len3 = len3.total(len1, len2);
    cout << "Total Length: ";
    len3.show_data();

    return 0;
}
