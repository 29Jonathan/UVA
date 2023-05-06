#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    string table = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

    getline(cin, str);
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
            cout << " ";
        else
        {
            str[i] = tolower(str[i]);
            int found = table.find(str[i]);
            cout << table[found-2];
        }
    }
    cout << endl;
    return 0;
}
