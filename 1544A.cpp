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
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		long long int ans=0;
		for(int i=1;i<n;i++)
		{ 
			ans=max(ans,1LL*arr[i]*arr[i-1]);
		}
		cout<<ans<<endl;
	}
}