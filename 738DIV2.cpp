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
		for(auto &it: arr) cin>>it;
		int sum=*max_element(arr.begin(),arr.end());
		for(int i=0;i<n;i++)
		{
			sum=sum&arr[i];
		}
		cout<<sum<<endl;
	}
}