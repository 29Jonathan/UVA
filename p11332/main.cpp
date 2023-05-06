#include<iostream>
using namespace std;

int summing(int n)
{
    int sum = 0;
    while(n!=0)
    {
        sum += n%10;
        n = n/10;
    }
    return sum;
}

int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)
            break;

        while(n > 9)
        {
            n = summing(n);
        }
        cout << n << endl;
    }
    return 0;
}