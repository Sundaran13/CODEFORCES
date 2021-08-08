#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int i=0,j=n-1;
	int a=0,b=0;
	if(n%2==0)
	{
		while(i<j)
		{
			if(arr[j]>arr[i])
			{
				a+=arr[j];
				j--;
				if(arr[j]>arr[i])
				{
					b+=arr[j];
					j--;
				}
				else
				{
					b+=arr[i];
					i++;
				}
			}
			else{
				a+=arr[i];
				i++;
				if(arr[i]>arr[j])
				{
					b+=arr[i];
					i++;
				}
				else
				{
					b+=arr[j];
					j--;
				}
			}
		}
	}
	else
	{
		while(i<=j)
		{
			if(i==j)
			{
				a+=arr[i];
				break;
			}
			if(arr[j]>arr[i])
			{
				a+=arr[j];
				j--;
				if(arr[j]>arr[i])
				{
					b+=arr[j];
					j--;
				}
				else
				{
					b+=arr[i];
					i++;
				}
			}
			else{
				a+=arr[i];
				i++;
				if(arr[i]>arr[j])
				{
					b+=arr[i];
					i++;
				}
				else
				{
					b+=arr[j];
					j--;
				}
			}
		}
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}