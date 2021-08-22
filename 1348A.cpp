#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int sum1=0,sum2=0;
		for(int i=1;i<=(n/2)-1;i++)
		{
			sum1=sum1+pow(2,i);
		}
		for(int i=n/2;i<n;i++)
		{
			sum2=sum2+pow(2,i);
		}
		cout<<sum1+pow(2,n)-sum2<<endl;
	}
	return 0;
}