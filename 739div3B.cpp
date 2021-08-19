#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int numb_of_peop=abs(a-b)*2;
		int opp_to_one=(numb_of_peop/2)+1;
		if(((abs(min(a,b)-1)==abs(max(a,b)-opp_to_one)))&&((max(a,b)>=opp_to_one&&min(a,b)<opp_to_one))&&(numb_of_peop>=c))
		{
			if(c==opp_to_one)
				cout<<1<<endl;
			else if(c==1)
				cout<<opp_to_one<<endl;
			else if(c>opp_to_one)
			{
				int diff=abs(opp_to_one-c);
				cout<<1+diff<<endl;
			}
			else
			{
				int diff=abs(1-c);
				cout<<opp_to_one+diff<<endl;
			}

		}
		else
			cout<<-1<<endl;

	}
}
