#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3,x4;
	cin>>x1>>x2>>x3>>x4;
	int max1=max(max(x1,x2),max(x3,x4));
	if(max1==x1)
		cout<<x1-x2<<" "<<x1-x3<<" "<<x1-x4<<endl;
	else if(max1==x2)
		cout<<x2-x1<<" "<<x2-x3<<" "<<x2-x4<<endl;
	else if(max1==x3)
		cout<<x3-x1<<" "<<x3-x2<<" "<<x3-x4<<endl;
	else
		cout<<x4-x1<<" "<<x4-x2<<" "<<x4-x3<<endl;
}