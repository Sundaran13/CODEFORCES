#include<bits/stdc++.h>
using namespace std;
int count(string s,char x,char y)
{
	int cnt=0,bal=0;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]==y){
			if(bal>0){
				cnt++;
				bal--;
			}
		}
		else if(s[i]==x)
		{
			bal++;
		}

	}
	return cnt;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		cout<<count(a,'(',')')+count(a,'[',']')<<endl;

	}
	return 0;
}