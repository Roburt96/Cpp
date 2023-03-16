#include <iostream>

using namespace std;

int main()
{
    double price_dog_food = 2.50;
    double price_cat_food = 4.00;
    double total_price = 0;
    int dog_food, cat_food;
    cin >> dog_food >> cat_food;

    total_price = dog_food * price_dog_food + cat_food * price_cat_food;
    cout << total_price << " lv." << endl;
    return 0;

}
