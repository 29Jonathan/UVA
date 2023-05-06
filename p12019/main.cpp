#include<iostream>
#include<string>
using namespace std;

int main()
{
    string day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int monthDay[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cases;
    cin >> cases;
    while(cases--)
    {
        int days = 5;
        int M, D;
        cin >> M >> D;
        for(int i=1; i<M; i++)
            days += monthDay[i];
        days += D;
        cout << day[days%7] << endl;
    } 
}