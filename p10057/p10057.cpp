#include <iostream>
#include <algorithm>
using namespace std;

///explain//
/*
An integer number A such that (|X1-A| + |X2-A| + … … + |Xn-A|) is minimum.
A is Median (中位數).
if odd
    median == middle integer ex. 12345 -> 3
    possible different integer values for A == 1
if even
    median == the small one of middle two integers ex. 123456 -> 3
    possible different integer values for A == first median - second median + 1 ex. 122556 -> 5-2+1=4

*//////////

int main()
{
    int n;
    while (cin >> n)
    {
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a+n);
        int median1 = a[(n-1)/2];
        int median2 = a[n/2];
        int count = 0;
        for(int i=0; i<n; i++)
            if(a[i]==median1 || a[i]==median2)
                count++;
        cout << median1 << ' ' << count << ' ' << median2-median1+1 << endl;
    }
}