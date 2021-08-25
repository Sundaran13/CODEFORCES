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
		unordered_map<int,int> map;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
		{
			map[arr[i]]++;
		}
		int mark=1;
		for(auto x:map)
		{
			if(x.second>1){
				mark=0;
			}
		}
		if(mark==0)
			cout<<0<<endl;
		else
		{
			sort(arr.begin(),arr.end());
			int mini=INT_MAX;
			for(int i=n-1;i>=1;i--)
			{
				mini=min(mini,arr[i]-arr[i-1]);
			}
			cout<<mini<<endl;
		}

	}
	return 0;
}