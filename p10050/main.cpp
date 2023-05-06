#include<iostream>
using namespace std;

int main()
{
    int cases, days, partiesNum;
    cin >> cases;
    while(cases--)
    {
        cin >> days >> partiesNum;
        int party[partiesNum], count = 0;
        for(int i=0; i<partiesNum; i++)
            cin >> party[i];
        
        for(int i=1; i<=days; i++)
            for(int j=0; j<partiesNum; j++)
                if(i%7 == 0 || i%7 == 6)
                {
                    break;
                }
                else if(i%party[j]==0)
                {
                    count++;
                    break;
                }
        
        cout << count << endl;
    }
}