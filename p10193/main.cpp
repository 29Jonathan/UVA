#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int t;
    long long i1, i2;
    string s1, s2;
    cin >> t;
    int c=1;
    while(t--)
    {
        cin >> s1 >> s2;
        i1 = 0; 
        i2 = 0;
        for(int i=0; i<s1.length(); i++)
            if(s1[i]=='1')
                i1 += pow(2, s1.length()-1-i);
        for(int i=0; i<s2.length(); i++)
            if(s2[i]=='1')
                i2 += pow(2, s2.length()-1-i);

        long long remain=1;
        while(remain != 0)
        {
            remain = i1%i2;
            i1 = i2;
            i2 = remain;
        }

        cout << "Pair #"<< c << ": " ;
        c++;
        if(i1==1)
            cout << "Love is not all you need!" << endl;
        else
            cout << "All you need is love!" << endl;
    }
}