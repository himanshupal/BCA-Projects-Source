/* C++ Program to Calculate generated Profit. */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    float quantity, retail_price, wholesale_price, profit;
    cout << "Enter Retail Cost Rs. ";
    cin >> retail_price;
    cout << "Enter WholeSale Cost Rs. ";
    cin >> wholesale_price;
    cout << "Enter Quantity Sold: ";
    cin >> quantity;
    profit = quantity * (retail_price - wholesale_price);
    cout << "You earned Rs." << profit << "/- profit.";
    return 0;
}
