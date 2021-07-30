#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string a,b;
	unordered_map<string,string> hssh;
	while(m--)
	{
		cin>>a>>b;
		hssh.insert({a,b});
	}
	vector<string> lecture(n);
	for(int i=0;i<n;i++)
		cin>>lecture[i];
	for(int i=0;i<n;i++)
	{
		for(auto x: hssh)
		{
			if(x.first==lecture[i])
			{
				if((x.first).length()<(x.second).length())
				{
					cout<<x.first<<" ";
				}
				else if((x.first).length()>(x.second).length())
				{
					cout<<x.second<<" ";
				}
				else
				{
					cout<<x.first<<" ";
				}
			}
		}
	}
	cout<<endl;
	return 0;
	
}