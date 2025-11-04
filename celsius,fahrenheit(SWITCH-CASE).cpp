#include<iostream>
using namespace std;

int main()
{
    int choice;
    double celsius, fahrenheit;

    cout << "Choose an Option" << endl;
    cout << "1. Convert from Fahrenheit to Celsius" << endl;
    cout << "2. Convert from Celsius to Fahrenheit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius" << endl;
        break;
    case 2:
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9 / 5) + 32;
        cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit" << endl;
        break;
    default:
        cout << "ERROR INPUT" << endl;
        break;
    }

    return 10;
}

