#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr;
	for(int i=1;i<=10000;i++)
	{
		if(i%3==0 || i%10==3)
			continue;
		else{
			arr.push_back(i);
		}

	}
	//cout<<arr[0];
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		cout<<arr[k-1]<<endl;
	}
	return 0;
}