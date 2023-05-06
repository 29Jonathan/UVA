#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    bool clock = true;
    while(getline(cin, str))
    {
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == '\"')
            {
                if(clock)
                    cout << "``";
                else
                    cout << "\'\'";

                clock = !clock;
            }
            else
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}