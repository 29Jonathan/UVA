#include<iostream>
using namespace std;

int main()
{
    int tc, s, d;
    cin >> tc;
    while(tc--) 
    {
        cin >> s >> d;
        if(d>=s || (s+d)%2==1)
        {
            cout << "impossible" << endl;
            continue;
        }
        int a, b; // a>=b ; b = (d-s) / -2
        b = (s-d)/2;
        a = (s+d)/2;
        cout << a << ' ' << b << endl;
    }
}