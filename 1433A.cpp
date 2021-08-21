#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int m=n;
		int min_keys=(n%10-1)*10;
		int count=0;
		while(m)
		{
			m/=10;
			count++;
		}
		for(int i=0;i<count;i++)
		{
			min_keys+=arr[i];
		}
		cout<<min_keys<<endl;
	}
}