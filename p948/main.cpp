#include<iostream>
using namespace std;

int main()
{
    int sequence[40] = {1, 1};
    for(int i=2; i<40; i++)
        sequence[i] = sequence[i-1] + sequence[i-2];
    
    int cases, decimal;
    cin >> cases; 
    while(cases--)
    {
        cin >> decimal;
        if(decimal == 0)
        {
            cout << "0 = 0 (fib)" << endl;
            continue;
        }
        else
        {
            cout << decimal << " = ";
            bool found = false;
            for(int i=39; i>=1; i--)
            if(decimal >= sequence[i])
            {
                found = true;
                decimal -= sequence[i];
                cout << 1;
            }
            else if(found)
                cout << 0;
        }
        cout << " (fib)" << endl;
    }
}