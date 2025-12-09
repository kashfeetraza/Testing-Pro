#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter the charachter:";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is lower-case Alpha" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is Upper-Case Alpha" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "This is Digits Number" << endl;
    }
    else
    {
        cout << "This is special-case Symbol" << endl;
    }

    //    checking vowel consonant.
    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') ||
        (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') ||
        (ch == 'O') || (ch == 'U'))
    {
        cout << "This Charachter is Vowel";
    }
    else
    {
        cout << "This Charachte is Consonant";
    }
    return 0;
}
