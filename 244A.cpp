#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int minusCnt=0;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==-1 && temp==0)
			minusCnt++;
		else if(arr[i]==-1 && temp>0)
		{
			temp--;
		}
		else if(arr[i]>0){
			temp=temp+arr[i];
		}
		else
		{
			continue;
		}
	}
	cout<<minusCnt<<endl;
	return 0;
}