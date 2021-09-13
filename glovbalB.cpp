#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int zero=count(s.begin(),s.end(),'0');
		if(zero==0){
			cout<<0<<endl;
			continue;
		}
		int first=s.find('0');
		int last=s.rfind('0');
		if(last-first+1==zero)
		{
			cout<<1<<endl;
		}
		//above case means true for all cases like
		//0000
		//100001
		//101
		//rest cases for which below elese is true is
		//010,001100110 because here minimum is
		//2 as there is minimum one partition
		//between two zeroes by 1 .that takes for 2
		//to be minimum.....
		else
		{
			cout<<2<<endl;
		}
	}
	return 0;
}