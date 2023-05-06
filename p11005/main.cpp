#include<iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int cost[36], queries, num;
    for(int c = 1; c <= cases; c++)
    {
        for(int i=0; i<36; i++)
            cin >> cost[i];

        cin >> queries;
        cout << "Cases " << c << ": " << endl;
        while(queries--)
        {
            cin >> num;

            int min = INT_MAX, sumArr[37]={0};
            for(int i=2; i<=36; i++)
            {
                int decimal = num;
                int sum=0;
                while(decimal != 0)
                {
                    sum = sum+cost[decimal%i];
                    decimal /= i;
                }
                sumArr[i] = sum;
                if(sum < min)
                    min = sum;
            }

            cout << "Cheapest base(s) for number " << num << ": ";
            for(int i=2; i<=36; i++)
                if(sumArr[i] == min)
                    cout << i << ' ';
            cout << endl;
        }
        cout << endl;
    }
}