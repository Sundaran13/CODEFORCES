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
		string s1;
		string s2;
		cin>>s1;
		cin>>s2;
		int max1=0;
		int max2=0;
		//sort(s1.begin(),s1.end());
		//sort(s2.begin(),s2.end());
		//int o=0;
		for(int i=0;i<n;i++)
		{
			if(s1[i]>s2[i])
				max1++;
			else if(s1[i]<s2[i])
				max2++;
		}

		if(max1>max2)
			cout<<"RED"<<endl;
		else if(max2>max1)
			cout<<"BLUE"<<endl;
		else
			cout<<"EQUAL"<<endl;
	}
}