#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		double sum1=0,sum2=0,sum=0;
		long long int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a.begin(),a.end());
		sum2=a[n-1];
		sum1=sum-sum2;
		double ans=sum2+sum1/(n-1);
		
		cout<<setprecision(11)<<ans<<endl;

	}
}