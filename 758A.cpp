#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	int count=0;
	for(int i=0;i<n-1;i++)
		count+=arr[n-1]-arr[i];
	cout<<count<<endl;
	
}