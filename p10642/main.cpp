#include<iostream>
using namespace std;

int steps(int x, int y)
{
    int n = x+y;
    n = n*(n+1)/2;
    return n+x;
}

int main()
{
    int T, source[2], dest[2];
    cin >> T;
    for(int cases=1; cases<=T; cases++)
    {
        cin >> source[0] >> source[1] >> dest[0] >> dest[1];
        cout << "Case " << cases << ": " 
             << steps(dest[0], dest[1])-steps(source[0], source[1]) << endl;
    }
}