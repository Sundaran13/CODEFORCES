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
		vector<int> a(n),b(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		long long int count=0;
		long long int min1=*min_element(a.begin(),a.end());
		long long int min2=*min_element(b.begin(),b.end());
		long long int max1=INT_MAX;
		for(int i=0;i<n;i++)
		{
			max1=max(a[i]-min1,b[i]-min2);
			count=count+max1;
			
		}
		cout<<count<<endl;
	}
	return 0;
}