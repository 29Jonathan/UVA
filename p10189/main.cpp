#include<iostream>
using namespace std;

/*
一個一個字元讀取，當遇到 * 時，將其位置 -10 ，以他為中心的九宮格全部 +1
最後為負數則輸出 * ，其餘直接輸出
*/

int main()
{
    int n, m, cases = 0;
    char ch;
    while(cin >> n >> m && (n!=0 || m!=0))
    {
        int field[102][102] = {0};
        cases++;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
            {
                cin >> ch;
                if(ch == '*')
                {
                    field[i][j] -= 10;

                    for(int x=i-1; x<=i+1; x++)
                        for(int y=j-1; y<=j+1; y++)
                            field[x][y]++;
                }
            }

        cout << "Field #" << cases << ":" << endl;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(field[i][j]<0)
                    cout << "*";
                else
                    cout << field[i][j];
            }
            cout << endl;
        }
        cout << endl; 
    }

    return 0;
}