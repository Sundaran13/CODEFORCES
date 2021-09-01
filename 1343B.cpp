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
		if(n%4==0)
		{{
			cout<<"YES"<<endl;
		}
		for(int i=1;i<=n/2;i++)
		{
				cout<<2*i<<" ";
		}
		for(int i=1;i<=n/2;i++)
		{
				if(i==n/2)
					cout<<2*i-1+n/2;
				else
					cout<<2*i-1<<" ";
		}
		cout<<endl;
	}
		else
			cout<<"NO"<<endl;
	}
}