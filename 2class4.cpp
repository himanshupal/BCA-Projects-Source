/* Program to demonstrate working of Class by creating an Array of Objects. */

#include <iostream>
using namespace std;

class list
{
private:
    string data;

public:
    void getdata();
    void showdata();
};

void list::getdata()
{
    cout << "Enter Item Name: ";
    cin >> data;
}

void list::showdata()
{
    cout << "Item Name: " << data << endl;
}

int main(int argc, char const *argv[])
{
    int qty;
    cout << "Enter No. of Items for the list: ";
    cin >> qty;
    list item[qty];
    for (int i = 0; i < qty; i++)
    {
        item[i].getdata();
    }
    system("cls");
    for (int i = 0; i < qty; i++)
    {
        item[i].showdata();
    }
    return 0;
}
