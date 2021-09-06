#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int keep=0;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i*5;
		if(sum+k<=240)
		{
			keep=i;
			continue;
		}
		else
		{
			//sum=sum-i*5;
			keep=i-1;
			break;
		}
	}
	cout<<keep<<endl;
}