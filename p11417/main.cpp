#include<iostream>
using namespace std;

int GCD(int i, int j)
{
    int t;
    while(i != 0)
    {
        t=j%i;
        j = i;
        i = t;
    }
    return j;
}

int main()
{
    int n;
    while(cin >> n)
    {
        if(n==0) break;

        int G=0;
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
                G+=GCD(i,j);
        cout << G << endl;
    }
}