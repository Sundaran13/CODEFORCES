#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int cnt2=0,cnt3=0;
		while(n%2==0)
		{
			//cout<<"YO"<<endl;
			cnt2++;
			n/=2;
		}
		while(n%3==0)
		{
			//cout<<"OYO"<<endl;
			cnt3++;
			n/=3;
		}
		if(cnt2>cnt3)
		{
			cout<<-1<<endl;
		}
		else
		{
			if(n==1)
				cout<<(cnt3-cnt2)+cnt3<<endl;
			else
				cout<<-1<<endl;
		}
	}
	return 0;
}