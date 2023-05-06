#include <iostream>
using namespace std;

int main(){
    int x;
    long long ans;
    long long a[1000000];

    while (cin >> x){
        int n = 0;
        while(true)
        { 
            cin >> a[n];
            if(cin.get() == '\n')
                break;
            n++;
        }

        ans = a[0]*n;
        for(int i=1; i<n; i++)
            ans = ans*x + a[i]*(n-i);

        cout << ans << endl;
    }

    return 0;
}