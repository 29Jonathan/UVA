#include<iostream>
#include<iomanip>
using namespace std;

void banglaConvert(long long num)
{
    if(num >= 10000000)
    {
        banglaConvert(num/10000000);
        cout << " kuti";
        num %= 10000000;
    }
    if(num >= 100000)
    {
        banglaConvert(num/100000);
        cout << " lakh";
        num %= 100000;
    }
    if(num >= 1000)
    {
        banglaConvert(num/1000);
        cout << " hajar";
        num %= 1000;
    }
    if(num >= 100)
    {
        banglaConvert(num/100);
        cout << " shata";
        num %= 100;
    }
    if(num)
    {
        cout << " " << num;
    }
}

int main()
{
    long long num;
    long long count = 0;
    while(cin >> num)
    {
        count++;
        cout << setw(4) << count << '.';
        if(num == 0)
            cout << " 0";
        else
            banglaConvert(num);
        cout << endl;
    }
    return 0;
}