#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> arr(4);
		for(int i=0;i<4;i++)
			cin>>arr[i];
		sort(arr.begin(),arr.end());
		cout<<arr[0]*arr[2]<<endl;
	}
	return 0;
}