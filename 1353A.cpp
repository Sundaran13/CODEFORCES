#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		long long int min1=INT_MAX;
		if(2<n-1)
			min1=2;
		else
			min1=n-1;
		if(n==1)
			cout<<0<<endl;
		else
			cout<<min1*m<<endl;
	}
}