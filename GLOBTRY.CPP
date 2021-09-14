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
		string a;
		cin>>a;
		string b;
		cin>>b;
		long long int count=0;
		long long int i=0;
		long long int len=a.length();
		while(i<n)
		{
			if(a[i]=='1' && b[i]=='1')
			{
				if(a[i+1]=='0'&& b[i+1]=='0')
				{
					count=count+2;
					i=i+2;
				}
				else
				{
					i++;
				}
			}
			else if(a[i]=='0'&&b[i]=='0')
			{
				if(a[i+1]=='1'&&b[i+1]=='1')
				{
					count+=2;
					i=i+2;
				}
				else
				{
					count=count+1;
					i++;
				}
			}
			else
			{
				count+=2;
				i++;
			}
		}
		/*for(int i=0;i<a.length();i++)
		{
			if(a[i]=='1'&&b[i]=='0')
				count+=2;
			if(a[i]=='0'&& b[i]=='1')
				count+=2;
		}*/
		cout<<count<<endl;
	}
}