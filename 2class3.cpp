
/* Program to demonstrate working of Class by Sorting an Array. */

#include <iostream>
using namespace std;
int limit;

class sort
{
private:
    int pos = 0, arr[100];

public:
    void getdata();
    void calc();
    void showdata();
};

void sort::getdata()
{
    while (pos < limit)
    {
        cout << "Enter Data for POSITION " << pos+1 << " : ";
        cin >> arr[pos];
        pos -= -1;
    }
}

void sort::calc()
{
    for (int i = 0; i < limit - 1; i++)
    {
        for (int j = i; j < limit; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] += arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] -= arr[j];
            }
        }
    }
}

void sort::showdata()
{
    system("cls");
    cout << "Sorted Array:" << endl;
    for (int i = 0; i < limit; i++)
    {
        cout << arr[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    sort srt;
    cout << "Enter No. of elements in Array: ";
    cin >> limit;
    srt.getdata();
    srt.calc();
    srt.showdata();
    return 0;
}
