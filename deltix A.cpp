#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int c,d;
	cin>>c>>d;
	if(c==0 && d==0)
		cout<<0<<endl;
	else if((c%2==0 && d%2!=0)||(c%2!=0 && d%2==0))
		cout<<-1<<endl;
	else
	{
		if(c==d)
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
}