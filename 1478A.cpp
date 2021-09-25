#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n+1);
		for(int i=0;i<n;i++)
		{
			arr[i]=0;
		}
		int u;
		for(int i=0;i<n;i++)
		{
			cin>>u;
			arr[u]=arr[u]+1;
		}
		int mx=0;
		for(int i=0;i<n+1;i++)
		{
			mx=max(mx,arr[i]);
		}
		cout<<mx<<endl;
	}
}