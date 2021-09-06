#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		cout<<b<<" ";
		a-=b;
		cout<<a/2;
	}
	else if(b>a)
	{
		cout<<a<<" ";
		b-=a;
		cout<<b/2;
	}
	else
	{
		cout<<a<<" ";
		cout<<0;
	}
	return 0;
}