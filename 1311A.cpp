#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int diff=a-b;
		if(diff==0)
			cout<<0<<endl;
		else if(diff>0)
		{
			if(abs(diff)%2!=0)
				cout<<2<<endl;
			else
				cout<<1<<endl;
		}
		else
		{
			if(abs(diff)%2==0)
				cout<<2<<endl;
			else
				cout<<1<<endl;
		}
	}
}