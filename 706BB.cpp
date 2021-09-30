#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int x,ans;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	int q;
	cin>>q;
	while(q--)
	{
		
		cin>>x;
		ans=upper_bound(arr.begin(),arr.begin()+n,x)-arr.begin();
		cout<<ans<<endl;

	}

}