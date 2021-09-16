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
		vector<int> arr1(n);
		int k=0;
		for(int i=0,j=n-1;i<n,j>=0;i++,j--)
		{
			if(i>j && n%2!=0){
				break;
			}

			else if(i>j && n%2==0)
				break;
			else
			{
				arr1[k]=arr[i];
				k++;
				arr1[k]=arr[j];
				k++;
			}

		}
		for(int i=0;i<n;i++)
			cout<<arr1[i]<<" ";
		cout<<endl;
	}
}