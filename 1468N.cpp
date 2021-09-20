#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c1,c2,c3;
		cin>>c1>>c2>>c3;
		int a1,a2,a3,a4,a5;
		cin>>a1>>a2>>a3>>a4>>a5;
		if(a1>c1 || a2>c2)
		{
			cout<<"No"<<endl;
		}
		else
		{
			c1=c1-a1;
			c2=c2-a2;
			int temp1=min(c1,a4);
			int temp2=min(c2,a5);
			c1=c1-temp1;
			c2=c2-temp2;
			a4=a4-temp1;
			a5=a5-temp2;
			if(a3+a4+a5<=c3)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;

		}
	}
}