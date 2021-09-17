#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int x;
	cin>>x;
	vector<int> ans;
	int sum=0,last=9;
	while(sum<x && last>0)
	{
		ans.push_back(min(x-sum,last));
		sum+=last;
		last--;
	}
	if(sum<x){
		cout<<-1<<endl;
	}
	else
	{
		reverse(ans.begin(),ans.end());
		for(int i: ans){
			cout<<i;
		}
		cout<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();

	}
}