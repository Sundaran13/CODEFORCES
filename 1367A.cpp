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
		vector<char> arr;
		arr.push_back(s[0]);
		for(int i=1;i<s.size();i=i+2)
		{
			char s1=s[i];
			arr.push_back(s1);
		}
		for(int i=0;i<arr.size();i++)
			cout<<arr[i];
		cout<<endl;
		
	}
	return 0;
}