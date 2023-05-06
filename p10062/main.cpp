#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int count = 0;
    while(getline(cin, str))
    {
        int freq[256] = {};
        for(int i=0; i<str.length(); i++)
            freq[str[i]]++;
        
        int max = 0;
        for(int i=0; i<256; i++)
            if(freq[i] > max) max = freq[i];
        
        if(count>0) cout << endl;
        count++;

        for(int i=1; i<=max; i++)
            for(int j=127; j>0; j--)
                if(freq[j]==i) cout << j << ' ' << freq[j] << endl;
    }
}