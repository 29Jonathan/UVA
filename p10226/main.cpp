#include<iostream>
#include<string>
#include<map>
#include<iomanip>
using namespace std;

int main()
{
    int T, total=0;
    string name;
    map<string, double> tree;
    cin >> T;
    cin.ignore();
    cin.ignore();
    while(T--)
    {
        while(getline(cin, name) && name != "")
        {
            total++;
            tree[name]++;
        }
        for(auto it = tree.begin(); it!=tree.end(); it++)
            cout << it->first << ' ' << fixed << setprecision(4) << it->second/total*100 << endl;
        
        tree.clear();
        total=0;
    }
}