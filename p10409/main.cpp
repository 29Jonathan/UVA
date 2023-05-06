#include<iostream>
#include<string>
using namespace std;

int main()
{
    int T;
    string command;
    while(cin>>T && T!=0)
    {
        int die[3] = {1, 2, 3}; // top, north, west
        for(int i=0; i<T; i++)
        {
            cin>>command;

            int temp = die[0];
            if(command == "north")
            {
                die[0] = 7 - die[1];
                die[1] = temp;
            }
            else if(command == "south")
            {
                die[0] = die[1];
                die[1] = 7 - temp;
            }
            else if(command == "west")
            {
                die[0] = 7 - die[2];
                die[2] = temp;
            }
            else if(command == "east")
            {
                die[0] = die[2];
                die[2] = 7 - temp;
            }
        }
        cout << die[0] << endl;
    }
}