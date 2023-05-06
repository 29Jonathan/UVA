#include<iostream>
#include<string>
using namespace std;

bool is_prime(int num)
{
    if(num == 2)
        return true;
    else if(num%2==0 || num < 2)
        return false;
    else
    {
        for(int i=3; i*i<=num; i+=2)
            if(num%i==0)
                return false;
    }
    return true;
}   
        
int main()
{
    int num;
    while(cin >> num)
    {
        if(!is_prime(num))
            cout << num << " is not prime.\n";
        else
        {
            string str = to_string(num);                //while(n1)
            char reStr[str.length()];                   //{
            for(int i=0; i<str.length(); i++)           //  n2=n2*10+n1%10;
                reStr[i] = str[str.length()-1-i];       //  n1/=10;
                                                        //}
            if(is_prime(stoi(reStr)) && str!=reStr)
                cout << num << " is emirp.\n";
            else
                cout << num << " is prime.\n";
        }
    }
}