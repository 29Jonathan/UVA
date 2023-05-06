#include<iostream>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b && (a!=0 || b!=0))
    {
        int count = 0; 
        int carry = 0;
        while(a!=0 && b!=0)
        {
            if(a%10 + b%10 + carry > 9)
            {
                carry = 1;
                count++;
            }
            else
                carry = 0;

            a = a/10;
            b = b/10;
        }

        if(count == 1)
            cout << "1 carry operation." << endl;
        else if(count == 0)
            cout << "No carry operation." << endl;
        else
            cout << count << " carry operations." << endl;
    }
    return 0;
}