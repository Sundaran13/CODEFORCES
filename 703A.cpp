#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int m,c;
	int countm=0,countc=0;
	while(t--)
	{
		cin>>m>>c;
		if(m>c)
			countm++;
		else if(c>m)
			countc++;
		else
			continue;
	}
	if(countc==countm)
		cout<<"Friendship is magic!^^"<<endl;
	else if(countc>countm)
		cout<<"Chris"<<endl;
	else
		cout<<"Mishka"<<endl;
	return 0;

}