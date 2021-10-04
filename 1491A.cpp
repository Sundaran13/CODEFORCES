#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,q;
		cin>>n>>q;
		vector<int> arr(n);
		int one=0,zero=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]==1)
				one++;
			else
				zero++;
		}
		while(q--)
		{
			int t,xk;
			cin>>t>>xk;
			if(t==1)
			{
				arr[xk-1]=1-arr[xk-1];
				if(arr[xk-1]>0){
					one++;
					zero--;
				}
				else{
					zero++;
					one--;
				}
			}
			else if(t==2)
			{
				if(xk<=one)
					cout<<1<<endl;
				else
					cout<<0<<endl;
			}
		}
	}