#include <iostream>
using namespace std;
class Car
{
public:
    string brand;
    string model;
    int year;
    Car()
    {
        cout << "default constructor called" << endl;
    }

    Car(string x, string y, int z)
    {

        brand = x;
        model = y;
        year = z;
    }
};
int main()
{
    Car obj1("bmw", "urus", 2550);
    Car obj2("fortuner", "x5", 4550);

    cout << obj1.brand << " " << obj1.model << " " << obj1.year << endl;
    cout << obj2.brand << " " << obj2.model << " " << obj2.year << endl;

    return 0;
}
