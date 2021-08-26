#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int l,r;
		cin>>l>>r;
		int maxi=INT_MIN;
		if(r/2>=l)
			cout<<(r+1)/2-1<<endl;
		else
			cout<<r%l<<endl;
	}
}