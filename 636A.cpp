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
		for(int k=2;k<30;k++)
		{
			long long int temp=pow(2,k)-1;
			if(n%temp==0){
				cout<<(n+temp)/(temp)-1<<endl;
				break;
			}
		}
		

	}
	return 0;
}