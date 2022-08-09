#include <iostream>
#include <string>
using namespace std;
class binary
{
public:
    string s;
    void read(void);
    void bin_chk(void);
    void display(void);
    void ones_compliment(void);
};
void binary::read()
{
    cout << "Enter the binary number" << endl;
    cin >> s;
}

void binary::bin_chk()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "THe number is not binary" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment()
{   bin_chk();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void binary::display()
    {
        for (int i = 0; i < s.length(); i++)
        {
            cout << s.at(i);
        }
        cout << endl;
    }

    int main()
    {
        binary p;
        p.read();
        p.bin_chk();
        p.display();
        p.ones_compliment();
        p.display();

        return 0;
    }