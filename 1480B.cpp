#include<bits/stdc++.h>
using namespace std;
void solve()
{
		int A,B,N;
		cin>>A>>B>>N;
		//bool t=true;
		vector<pair<int,int>> arr(N);
		for(int i=0;i<N;i++)cin>>arr[i].first;
		for(int i=0;i<N;i++)cin>>arr[i].second;
		sort(arr.begin(),arr.end());
		int i=0;
		while(i<N)
		{
			int moves_to_kill_monster=(arr[i].second+A-1)/A;
			int moves_to_kill_Hero=(B+arr[i].first-1)/arr[i].first;
			if(moves_to_kill_monster>moves_to_kill_Hero){
				cout<<"No"<<endl;
				return;
			}
			B-=moves_to_kill_monster*arr[i].first;
			i++;
			if(B<=0)
			{
				break;
			}
		}
		if(i==N)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	
}
signed main()
{
int t;
cin>>t;
while(t--)
{
	solve();
}
return 0;
}