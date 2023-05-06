#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int difference[n]={0};
        int pre, num;
        bool isJolly = true;
        
        cin >> pre;
        for(int i=1; i<n; i++)
        {
            cin >> num;
            int dif = abs(num-pre);
            difference[dif]++;
            if(dif == 0 || dif > n-1 || difference[dif] >= 2)
            {
                isJolly = false;
                break;
            }
            pre = num;
        }

        if(isJolly)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
    return 0;
}
