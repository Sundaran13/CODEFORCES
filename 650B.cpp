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
		int even=0,odd=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x%2!=i%2)
			{
				if(i%2==0)
					odd++;
				else
					even++;
			}
		}
		if(odd==even)
			cout<<odd<<endl;
		else
			cout<<-1<<endl;
	}
}