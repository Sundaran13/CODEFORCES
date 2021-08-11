#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int w,h,n;
		cin>>w>>h>>n;
		long long int count=1;
		while(w%2==0)
		{
			w/=2;
			count*=2;
			
		}
		while(h%2==0)
		{
			h/=2;
			count*=2;
			
		}
		if(count>=n)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}

	return 0;
}