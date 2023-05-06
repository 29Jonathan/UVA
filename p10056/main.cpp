/*
    算法大致上就是先求出第一輪x玩家獲勝的機率，
    再加上第二輪x玩家獲勝的機率…一直加到無窮大。

    設p = 獲勝的機率, 
    q = 沒有獲勝的機率 = 1 - p,
    n = 總共的玩家數, 
    x = 第幾個玩家要贏

---無窮等比級數和--- 1-公比 分之 首項

( p * q ^ (x - 1) ) / (1 - q ^ n)
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int cases, players, i;
    double p;
    cin >> cases;
    while(cases--)
    {
        cin >> players >> p >> i;
        double q = 1-p;
        if(q==1)
            cout<<"0.0000"<<endl;
        else
        {
            double win = (p*pow(q, i-1))/(1-pow(q, players));
            cout << fixed << setprecision(4) << win << endl;
        }
    }
    return 0;
}
