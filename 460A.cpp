#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int div=n/m;
	int sum=n;
	if(m==1)
		cout<<2*n<<endl;
	else if(m==1 && n==1)
		cout<<2<<endl;
	else{
	while(n>=m)
	{
		sum=sum+n/m;
		n=n/m+n%m;
	}
	cout<<sum<<endl;
}
}