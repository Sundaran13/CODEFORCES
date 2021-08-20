#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<int> arr;
	if(n%2!=0)
	{
		int i=0;
		while(i<n-3)
		{
			arr.push_back(2);
			i+=2;
		}		
		arr.push_back(3);
		cout<<arr.size()<<endl;
		for(auto x: arr)
			cout<<x<<" ";
		
	}
	else
	{
		int i=0;
		while(i<n)
		{
			arr.push_back(2);
			i+=2;
		}
		cout<<arr.size()<<endl;
		for(auto x: arr)
			cout<<x<<" ";

	}
	return 0;
}