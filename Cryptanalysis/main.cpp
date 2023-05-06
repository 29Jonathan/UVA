#include<iostream>
#include<string>
using namespace std;
// a = 97 z = 122, A = 65 Z = 90
int main()
{
    int times;
    string str;
    int arr[100] = {};
    cin >> times >> ws;
    while(times--)
    {
        getline(cin, str);
        for(int i = 0; i < str.size(); i++)
        {
            str[i] = toupper(str[i]);
            if(str[i] <= 'Z' && str[i] >= 'A')
                arr[int(str[i])]++;
        }
    }

    for(int i = 100; i >= 1; i--)
    {
        for(int j = 'A'; j <= 'Z'; j++)
            if(arr[j] == i)
                cout << char(j) << ' ' << i << endl;
    }
    
    return 0;
}