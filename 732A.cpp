#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r;
	cin>>k>>r;
	int count=1;
	for(int i=1;i<=10;i++)
	{
		if(((k*i-r)%10==0)||(k*i)%10==0)
		{
			cout<<count<<endl;
			break;
		}
		else
			count++;
	}
	return 0;
}