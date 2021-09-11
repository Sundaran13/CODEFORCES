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
		string s;
		cin>>s;
		string s1=s;
		sort(s1.begin(),s1.end());
		int k=0;
		for(int i=0;i<n;i++)
		{
			if(s1[i]!=s[i])
				k++;
		}
		cout<<k<<endl;

	}
}