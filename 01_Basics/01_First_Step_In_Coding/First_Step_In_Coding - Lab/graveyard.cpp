#include <iostream>
using namespace std;

int main()
{
    double price_per_m = 7.61;
    double discount = 0.18;

    int size;
    cin >> size;

    double price_without_discount = size * price_per_m;
    double total_discount = price_without_discount * discount;

    cout << "The final price is: " << price_without_discount - total_discount << " lv." << endl;
    cout << "The discount is: " << total_discount << " lv." << endl;

    return 0;

}
