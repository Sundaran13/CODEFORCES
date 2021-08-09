#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	unordered_map<long long int,long long int> map;
	while(t--)
	{
		
		map[1]=0;
		map[2]=0;
		long long int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
		{
			map[arr[i]]++;
		}
		int sum=0;
		for(int i=0;i<n;i++)
			sum+=arr[i];
		if(sum%2!=0)
			cout<<"NO"<<endl;
		else
		{
			sum=sum/2;
			if(sum%2==0||(sum%2==1 && map[1]!=0))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}

	}
}