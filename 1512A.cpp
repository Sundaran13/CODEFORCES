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
		unordered_map<int,int> map;
		for(auto &it : arr)cin>>it;
		for(int i=0;i<n;i++)
		{
			map[arr[i]]++;
		}
		int take;
		for(auto x:map)
		{
			if(x.second==1)
				take=x.first;

		}
		//cout<<take<<endl;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==take)
				cout<<i+1<<endl;
		}

	}
}