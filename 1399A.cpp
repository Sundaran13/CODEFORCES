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
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr.begin(),arr.end());
		bool ok=true;
		for(int i=1;i<n;i++)
		{
			ok&=(arr[i]-arr[i-1]<=1);
		}
		if(ok)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}