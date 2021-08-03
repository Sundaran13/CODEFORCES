#include<bits/stdc++.h>
using namespace std;
int OrdinaryNum(int n)
{
	int res=0;
	long long int pow=1;
	for(pow=1;pow<=n;pow=pow*10+1)
	{
		for(int d=1;d<=9;d++)
		{
			if(d*pow<=n)
				res++;
		}
	}
	return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		cout<<OrdinaryNum(n)<<endl;
	}
	return 0;
}