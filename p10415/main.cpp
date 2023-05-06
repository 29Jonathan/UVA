#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

int main()
{
    map<char, string> mp;
    mp['c'] = "00111001111";
	mp['d'] = "00111001110";
	mp['e'] = "00111001100";
	mp['f'] = "00111001000";
	mp['g'] = "00111000000";
	mp['a'] = "00110000000";
	mp['b'] = "00100000000";
	mp['C'] = "00010000000";
	mp['D'] = "01111001110";
	mp['E'] = "01111001100";
	mp['F'] = "01111001000";
	mp['G'] = "01111000000";
	mp['A'] = "01110000000";
	mp['B'] = "01100000000";
    int T;
    string str;
    cin >> T;
    cin.ignore();
    while(T--)
    {
        getline(cin, str);
        int press[11]={0};
        int countPress[11]={0};

        for(int i=0; i<str.length(); i++)
            for(int j=1; j<=10; j++)
                if(mp[str[i]][j] == '1' && press[j] == 0)
                {
                    press[j]=1;
                    countPress[j]++;
                }
                else if(mp[str[i]][j] == '0')
                    press[j]=0;
        
        for(int i=1; i<=10; i++)
            cout << countPress[i] << ' ';
        cout << endl;
    }
}