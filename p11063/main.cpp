#include<iostream>
using namespace std;

int main()
{
    int n, Case=1;
    while(cin >> n)
    {
        int b[n], sum[20005] = {};
        for(int i=0; i<n; i++)
            cin >> b[i];

        bool isB2 = true;
        for(int i=0; i<n; i++)
        {
             for(int j=i; j<n; j++)
            {
                if(sum[b[i]+b[j]])
                {
                    isB2 = false;
                    break;
                }
                else
                    sum[b[i]+b[j]]++;
            }
            if(!isB2)
                break;
        }  

        if(isB2)
            cout << "Case #" << Case++ << ": It is a B2-Sequence.\n\n";
        else
            cout << "Case #" << Case++ << ": It is not a B2-Sequence.\n\n";
    }
}