#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        if(num==0) break;

        string str = "";
        int count = 0;
        while(num != 0)
        {
            count += num%2;
            str = to_string(num%2) + str;
            num /= 2;
        }
        cout << "The parity of "<< str <<" is "<< count <<" (mod 2)." << endl;
    }
    return 0;
}