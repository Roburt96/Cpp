#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string firstName, lastName, town;
    int age;
    cin >> firstName >> lastName >> age >> town;

    cout << "You are " << firstName << " " << lastName << "," << " a " << age
    << "-year old person from " << town << "." << endl;
    return 0;
}
