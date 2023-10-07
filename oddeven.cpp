#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter first number :" << endl;
    cin >> a;
    cout << "Enter second number :" << endl;
    cin >> b;

    if (a % 2 == 0)
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }

    if (b % 2 == 1)
    {
        cout << "number is odd" << endl;
    }
    else
    {
        cout << "number is even" << endl;
    }
    return 0;
}