#include<iostream>
using namespace std;

int main()
{
    int num, divisor;
    int sequence[100];
    while(cin >> num >> divisor)
    {
        int counter=1;
        bool boring = false; 
        sequence[0] = num;
        if(num < divisor || divisor <= 1)
        {
            cout << "Boring!" << endl;
            boring = true;
            continue;
        }
        while(num != 1)
        {
            if(num%divisor != 0)
            {
                cout << "Boring!" << endl;
                boring = true;
                break;
            }
            num /= divisor;
            sequence[counter] = num;
            counter++;
        }
        if(!boring)
            for(int i=0; i<counter; i++)
                cout << sequence[i] << ' ';
        if(!boring)
            cout << endl;
    }
    return 0;
}