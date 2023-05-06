#include<iostream>
#include<algorithm>
using namespace std;
// solution: 中位數和其他點的距離和會最小
//中位数是指此有限有序序列中最中间的那个数

int distance()
{
    int sum = 0;
    int relatives;
    cin >> relatives;
    int street[relatives];
    for(int i=0; i<relatives; i++)
        cin >> street[i];
    sort(street, street+relatives);
    int mid = street[relatives/2];
    for(int i=0; i<relatives; i++)
        sum += abs(street[i]-mid);
    return sum;
}

int main()
{
    int testTimes;
    cin >> testTimes;
    for(int i = 0; i < testTimes; i++)
    {
        cout << distance() << endl;
    }
    return 0;
}
