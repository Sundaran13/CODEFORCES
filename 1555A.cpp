#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		if(n<6)
			n=6;
		else n=n;
		/*if(n%2==0)
			cout<<1ll*2.5*n<<endl;
		else
			cout<<(1ll*2.5*n)+1<<endl;*/
		//out<<6ll<<endl;
		if(n%2==0)
			cout<<(n/2)*5<<endl;
		else
			cout<<((n+1)/2)*5<<endl;
	}
}