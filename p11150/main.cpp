#include<iostream>
using namespace std;

int main()
{
    int bottles, enjoyed;
    while(cin >> bottles)
    {
        enjoyed = bottles;
        while(bottles >= 3)
        {
            enjoyed += bottles/3;
            bottles = bottles/3 + bottles%3;
        }
        if(bottles == 2)
            enjoyed++;
        cout << enjoyed << endl;
    }
}

/*
    int n, enjoyed;
    while(cin >> n)
    {
        enjoyed = n + n/2;
        cout << enjoyed << endl;
    }
*/