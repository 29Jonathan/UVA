#include<iostream>
using namespace std;

int main()
{
    int testC, a, b, sum, count = 0;
    cin >> testC;
    while(testC--)
    {
        sum = 0;
        cin >> a >> b;
        for(int i=a; i<=b; i++)
        {
            if(i%2 != 0)
                sum += i;
        }
        count++;
        cout << "Case " << count << ": " << sum << endl;
    }
    return 0;
}