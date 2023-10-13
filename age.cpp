#include <iostream>
using namespace std;
int main()
{
    int z;
    cout << "Enter the age : " << endl;
    cin >> z;
    if (z <= 0)
    {
        cout << "baby is not born : " << endl;
    }
    else if (z < 18 )
    {
        cout << "child :" << endl;
    }
    else if (z >=18 && z<=60)
    {
        cout << "adult :" << endl;
    }
    else
    {
        cout << "old :" << endl;
    }
    return 0;
};
