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
		if(n==1)
			cout<<-1<<" "<<-1<<endl;
		else
		{
			int temp=1;
			for(int i=0;i<n;i++)
			{
				if((s[i]=='a'&&s[i+1]=='b')||(s[i]=='b'&&s[i+1]=='a')){
					cout<<i+1<<" "<<i+2<<endl;
					temp=0;
					break;
				}
			}
			if(temp==1)
				cout<<-1<<" "<<-1<<endl;
		}
	}
	return 0;
}