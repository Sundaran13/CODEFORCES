#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	string a,b;
	cin>>a;
	cin>>b;
	long long int cnt=0;
	long long int i=0;
	while(i<n)
	{
		if(a[i]!=b[i])
		{
			if(a[i]!=a[i+1] && a[i+1]!=b[i+1]){
				cnt++;
				i+=2;
			}
			else{
				cnt++;
				i++;
			}

		}
		else
			i++;
	}
	cout<<cnt<<endl;

}