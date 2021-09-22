#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		bool deci=false;
		int max=a[0]+a[1];
		if(max<=d)
			cout<<"Yes"<<endl;
		else
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]<=d)
					continue;
				else
				{
					deci=true;
					break;
				}
			}
			if(deci==true)
				cout<<"No"<<endl;
			else
				cout<<"Yes"<<endl;
		}
	}
}