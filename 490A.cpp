#include<bits/stdc++.h>
using namespace std;
int a,b,mas[4][5001],ma[4],ans;
int main()
{
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>b;
		mas[b][ma[b]++]=i;
	}
	//contains index of element at a[i][j]
	//i->name of element row number
	//j->count of element corresponding to row number
	//exampple if 1 is sored firstly at index 1 then at 3;
	//then the mattrix contains index of 1 wrt the number of times at column number

	ans=min(ma[1],min(ma[2],ma[3]));
	cout<<ans<<endl;
	/*for(int i=0;i<a;i++)
	{
		cout<<mas[1][i]<<" ";
	}*/
	for(int i=0;i<ans;i++)
		cout<<mas[1][i]<<" "<<mas[2][i]<<" "<<mas[3][i]<<endl;



}