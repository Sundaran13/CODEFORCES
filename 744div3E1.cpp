#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		deque<int> dq;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int s;
			cin>>s;
			if(s>dq.front())
				dq.push_back(s);
			else
				dq.push_front(s);
		}
		for(int i=0;i<n;i++)
			cout<<dq[i]<<" ";
		cout<<endl;
	}
	return 0;
}