/*#include <iostream>
using namespace std;
int main()
{
    char h;
    cout << "Enter a character :" << endl;
    cin >> h;
    if (h == 'a' || h == 'A' || h == 'e' || h == 'E' || h == 'i' || h == 'I' || h == 'o' || h == 'O' || h == 'u' || h == 'U')
    {
        cout<<"char is vowel :" <<endl;
    }else{
        cout<<"char is const :"<<endl;
    }

    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    char j;
    cout << "enter a char :" << endl;
    cin >> j;
    switch (j)
    {
    case 'a':
        cout << "vowel";
        break;

    case 'A':
        cout << "vowel";
        break;

    case 'e':
        cout << "vowel";
        break;

    case 'E':
        cout << "vowel";
        break;

    case 'i':
        cout << "vowel";
        break;

    case 'I':
        cout << "vowel";
        break;

    case 'o':
        cout << "vowel";
        break;

    case 'O':
        cout << "vowel";
        break;

    case 'u':
        cout << "vowel";
        break;

    case 'U':
        cout << "vowel";
        break;

    default:
        cout << "const";
        break;
    }

    return 0;
}