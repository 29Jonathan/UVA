#include<iostream>
#include<string>
using namespace std;

bool summing(string str, int &degree)
{
    if(str=="9")
        return true;
    else if(str.length()==1)
        return false;
    else
    {
        int sum = 0;
        for(int i=0; i<str.length(); i++)
            sum += (str[i]-'0');
            degree++;
        return summing(to_string(sum), degree);
    }
}

int main()
{
    string str;
    while(cin >> str)
    {
        if(str == "0")
            break;
        
        int degree = 0;
        if(str=="9") degree=1;
        
        if(summing(str, degree))
            cout << str << " is a multiple of 9 and has 9-degree " << degree << ".\n";
        else
            cout << str << " is not a multiple of 9.\n";
    }
}