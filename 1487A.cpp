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
		vector<int> v(n);
		int min1=INT_MAX;
		for(int i=0;i<n;i++){

			cin>>v[i];
			min1=min(min1,v[i]);

		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(v[i]!=min1)
				count++;
		}
		cout<<count<<endl;

	}
	return 0;
}