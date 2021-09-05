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
		string a;
		cin>>a;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='L')
				cout<<'L';
			if(a[i]=='R')
				cout<<'R';
			if(a[i]=='U')
				cout<<'D';
			if(a[i]=='D')
				cout<<'U';
		}
		cout<<endl;

	}
	return 0;
}