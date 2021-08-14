#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(2*n);
		for(auto &it : v) cin >> it;
		//for(auto it :v)cout<<it;
		vector<int> used(n);
		vector<int> p;
		for(int i=0;i<2*n;i++)
		{
			if(!used[v[i]-1])
			{
				used[v[i]-1]=true;
				p.push_back(v[i]);
			}
		}
		for(auto it :p) cout<< it <<" ";
		cout<<endl;
	}
}