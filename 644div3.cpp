#include<bits/stdc++.h>
using namespace std;
int find_n_root(int m)
{
	if(float(sqrt(m))==int(sqrt(m)))
		return m;
	else{
		return(find_n_root(m+1));
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int mult=2*a*b;
		int n=min(max(2*a,b),max(2*b,a));
		cout<<n*n<<endl;
		
	}
	return 0;
}