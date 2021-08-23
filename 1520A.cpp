#include<bits/stdc++.h>
using namespace std;
void solve()
{
		int n;
		cin>>n;
		string a;
		cin>>a;
		//int mark=1;
		for(char c='A';c<='Z';c++)
		{
			int first=n;
			int last=-1;
			for(int i=0;i<n;i++)
			{
				if(a[i]==c)
				{
					first=min(first,i);
					last=max(last,i);
				}
			}
			for(int k=first;k<=last;k++)
			{
				if(a[k]!=c){
					cout<<"NO"<<endl;
					return;
				}
					
			}
		}
	cout<<"YES"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}