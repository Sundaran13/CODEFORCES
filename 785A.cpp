#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int sum=0;
	while(t--)
	{
		string n;
		cin>>n;
		if(n=="Tetrahedron")
			sum=sum+4;
		if(n=="Cube")
			sum=sum+6;
		if(n=="Octahedron")
			sum=sum+8;
		if(n=="Dodecahedron")
			sum=sum+12;
		if(n=="Icosahedron")
			sum=sum+20;
	}
	cout<<sum<<endl;
}