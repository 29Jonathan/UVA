#include<iostream>
using namespace std;

int main()
{
    int T, length, carriages[50];
    cin >> T;
    while(T--)
    {
        int steps = 0;
        cin >> length;
        for(int i=0; i<length; i++)
            cin >> carriages[i];
        
        for(int i=length-1; i>=0; i--)
            for(int j=0; j<i; j++)
                if(carriages[j] > carriages[j+1])
                {
                    steps++;
                    swap(carriages[j], carriages[j+1]);
                }
        cout << "Optimal train swapping takes "<< steps << " swaps.\n";
    }
}