#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str[100];
    int count = 0, maxLength = 0 ;
    while(getline(cin, str[count]))
    {
        if(maxLength < str[count].length())
            maxLength = str[count].length();

        count++;
    }

    for(int j=0; j<maxLength; j++)
    {
        for(int i=count-1; i>=0; i--)
        {
            if(j>=str[i].length())
                cout << " ";
            else
                cout << str[i][j];
        }
        cout << endl;
    }
    
    return 0;
}