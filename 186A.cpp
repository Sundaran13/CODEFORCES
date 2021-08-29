#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>=0)
		cout<<n<<endl;
	else
	{
		long long int m=n-n%10;
		m=m/10;
		long long int m1=n/100;
		m1=m1*10+n%10;
		cout<<max(m,m1)<<endl;
	}
	return 0;
}