#include<iostream>
using namespace std;

int binary(int num)
{
    int count = 0;
    while(num != 0)
    {
        int exp = 1;
        while(num >= exp)
        {
            exp *= 2;
        }
        num -= exp/2;
        count++;
    }
    return count;
    
}

int main()
{
    int cases;
    cin >> cases;
    while(cases--)
    {
        int b1, b2;
        int decimal, hex = 0;
        cin >> decimal;
        b1 = binary(decimal);
        int exp = 1;
        while(decimal != 0)
        {
            hex += (decimal % 10)*exp;
            decimal /= 10;
            exp *= 16;
        }
        b2 = binary(hex);
        cout << b1 << ' ' << b2 << endl;
    }
}