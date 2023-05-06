#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> m;
    string country, name;
    int cases;
    cin >> cases;
    while(cases--)
    {
        cin >> country;
        getline(cin, name); 
        m[country]++;
    }
    for(auto it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << endl;
}