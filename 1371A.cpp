#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		if(n==1)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<n-(n/2)<<endl;
		}
	}
	return 0;
}