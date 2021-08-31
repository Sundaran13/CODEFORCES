#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	int sum=x1+x2+x3;
	int max1=max(x1,max(x2,x3));
	int diff1=sum-max1;
	int min1=191;
	if(max1==x3)
		min1=min(x1,x2);
	else if(max1==x2)
		min1=min(x1,x3);
	else
		min1=min(x2,x3);
	int numb=sum-max1-min1;
	cout<<abs(x1-numb)+abs(x2-numb)+abs(x3-numb);
}