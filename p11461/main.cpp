#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b;
    while(true)
    {
        cin >> a >> b;
        if(a==0 && b==0)
            break;
        
        int count=0;
        for(int i=a; i<=b; i++)
        {
            int square = sqrt(i);
            if(square*square == i)
                count++;
        }
        cout << count << endl;
    }
}