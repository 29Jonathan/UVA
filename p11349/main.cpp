#include<iostream>
using namespace std;
int main()
{
    int cases, n;
    char a, b;
    cin >> cases;
    for(int i=1; i<=cases; i++)
    {
        cin >> a >> b >> n;
        long long m[n*n];
        bool symmetric = true;
        for(int j=0; j<n*n; j++)
        {
            cin >> m[j];
            if(m[j]<0)
            {
                symmetric = false;
                break;
            }
        }
        
        for(int j=0; j<n*n/2; j++)
        {
            if(m[j] != m[n*n-j-1])
                symmetric = false;   

            if(!symmetric) break;
        }

        if(symmetric)
            cout<<"Test #"<<i<<": Symmetric."<<endl;
        else
            cout<<"Test #"<<i<<": Non-symmetric."<<endl;
    }
}