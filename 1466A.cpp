#include<bits/stdc++.h>
using namespace std;
float hero(int x2,int x3)
{
	return float(0.5*abs((float(x2)-float(x3))));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		unordered_set<float> s;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(hero(arr[i],arr[j])!=0){
					s.insert(float(hero(arr[i],arr[j])));
				}
			}
		}
		cout<<s.size()<<endl;
	}
}