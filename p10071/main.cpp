#include <iostream>
using namespace std;

int main()
{	
	int v,t;
	
	while(cin>>v>>t)//輸入測資 
	{
		cout<<t*v*2<<endl;//輸出 d = (v'-v0)t/2 , v'-v0 = v
	}
	return 0;
}