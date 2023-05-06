#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    double radius, angle;
    string str;
    while(cin >> radius >> angle >> str)
    {
        radius += 6440.0;
        if(str == "min")
            angle /= 60.0;

        double arc = 2.0*M_PI*radius*(angle/360);
        angle = angle*(M_PI/180.0);
        double chord = radius/sin((M_PI+angle)/2)*sin(angle);
        cout << fixed << setprecision(6) << arc << ' ' 
             << fixed << setprecision(6) << chord <<endl; 
    }
}