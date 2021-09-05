#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		long long int diff=abs(a-b);
		long long int moves=0;
		if(diff%10>0)
			cout<<(diff/10)+1<<endl;
		else
			cout<<diff/10<<endl;
	}
	return 0;
}