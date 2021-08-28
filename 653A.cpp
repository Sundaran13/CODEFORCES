#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int x,y,n;
		cin>>x>>y>>n;
		long long int tr=n-(n%x)+y;
		if(tr<=n)
			cout<<tr<<endl;
		else
			cout<<tr-x<<endl;
	}
	return 0;
}