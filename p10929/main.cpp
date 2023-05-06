#include<iostream>
#include<string>
using namespace std;
/*
一個數的奇數位上數字和與偶數位上數字和的差是11的倍數,那麼這個數能被11整除.
*/
int main()
{
    string num;
    while(cin >> num)
    {
        if(num == "0")
            break;

        int even = 0, odd = 0;
        for(int i=0; i<num.length(); i++)
        {
            if(i%2==0)
                odd += int(num[i])-int('0');
            else
                even += int(num[i])-int('0');
        }
        if(abs(odd-even)%11==0)
            cout << num << " is a multiple of 11.\n";
         else
            cout << num << " is not a multiple of 11.\n";
    }

    return 0;
}