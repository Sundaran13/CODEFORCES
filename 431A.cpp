#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=4;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.length();i++)
	{
		char get=s[i];
		//int ia=(int)get;
		sum=sum+a[get-'0'-1];
	}
	cout<<sum<<endl;
}