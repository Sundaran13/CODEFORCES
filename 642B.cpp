#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		vector<int> b(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		for(int i=0,j=n-1;i<k,j>=n-k;i++,j--)
		{
			if(a[i]<b[j])
				swap(a[i],b[j]);
		}
		cout<<accumulate(a.begin(),a.end(),0)<<endl;
	}
	return 0;
}