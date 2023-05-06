#include<iostream>
using namespace std;

int circleLength(int n)
{
    int count = 1;
    while(n != 1)
    {
        count++;
        if(n%2 != 0)
            n = 3*n+1;
        else
            n = n/2;
    }
    return count;
}

int main()
{
    int i, j;
    while(cin >> i >> j)
    {
        int a = i;
        int b = j;
        int maxLength = 0;
        if(j<i)
        {
            int temp = j;
            j = i;
            i = temp;
        }

        for(int x=i; x<=j; x++)
        {
            int length = circleLength(x);
            if(length > maxLength)
                maxLength = length;
        }

        cout << a << ' ' << b << ' ' << maxLength << endl;
    }
    return 0;
}