#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	unordered_map<string,int> map;

	while(n--)
	{
		string team;
		cin>>team;
		if(map.find(team)==map.end())
		{
			map[team]=1;
		}
		else
		{
			map[team]++;
		}
	}
	int max=0;
	vector<string> v;
	for( auto x:map)
	{
		if(x.second>max)
		{
			max=x.second;
			v.clear();
			v.push_back(x.first);
		}
	}
	cout<<v[0]<<endl;
  
  
}