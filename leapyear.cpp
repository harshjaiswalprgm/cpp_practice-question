#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year : " << endl;
    cin >> year;

    if (year % 400 == 0 && year % 100 == 0 && year % 4 == 0)
    {
        cout << "Leap year" << endl;
    }
    else if (year % 400 != 0 && year % 100 == 0 && year % 4 == 0)
    {
        cout << "Not a leep year" << endl;
    }
    else if (year % 400 != 0 && year % 100 != 0 && year % 4 == 0)
    {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Not a leap year" << endl;
    }

    return 0;
}