// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int i;
//     cout << "Enter a number :" << endl;
//     cin >> n;
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Number is not prime " << endl;
//             break;
//         }
//     }
//     if (i == n)
//     {
//         cout << "Number is prime" << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int n, i, k;
    cout << "enter the nth number :" << endl;
    cin >> n;
    for (i = 2; i < n; i++) // to print prime no. 1-100
    {
        for (k = 2; k < i; k++)
        {
            if (i % k == 0)
            {
                break;
            }
        }
        if (k == i)
        {
            cout << k<<endl;
        }
    }
}
