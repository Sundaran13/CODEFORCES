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
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		unordered_set<int> s;
		for(int i=0;i<n;i++)
		{
			if(s.find(arr[i])!=s.end()){
				arr[i]++;
				s.insert(arr[i]);
			}
			else
				s.insert(arr[i]);
		}
		cout<<s.size()<<endl;
	}
}