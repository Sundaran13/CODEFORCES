#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll temp;
		//vector<long long int> a(n);
		ll sum=0,sum1=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			sum+=temp;
			sum1+=ceil(temp*1.0/x);
		}
		cout<<(ll)ceil(sum*1.0/x)<<" "<<sum1<<'\n';
	}
}