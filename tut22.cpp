#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void one(void);
    void display(void);
    void chk_bin(void);
    void one_compliment();
};

void binary::read(void)
{
    cout << "Enter a binary Number:" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Inncorrect binary digits";
            exit(0);
        }
    }
}

void binary::one_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary n;
    // n.chk_bin();
    n.read();
    n.display();
    n.one_compliment();
    n.display();
    return 0;
}