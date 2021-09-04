#include<bits/stdc++.h>
using namespace std;
int sumofdigits(long long int m)
{
	int sum=0;
	while(m)
	{
		sum+=m%10;
		m/=10;
	}
	return sum;
}
int count(int n)
{
	int count1 =0;
	while(n)
	{
		int temp=n%10;
		if(temp!=0)
			count1++;
		n/=10;
	}
	return count1;

}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int m=n;
		int nDigits = floor(log10(abs(m))) + 1;
		int nDigits1=count(m);
		long long int tmpo2=sumofdigits(m);
		cout<<nDigits1<<endl;
		for(int i=0;i<nDigits;i++)
		{
			int temp=n%10;
			n/=10;
			long long int tempo=temp*pow(10,i);
			if(tempo!=0)
				cout<<tempo<<" ";
		}
		cout<<endl;
	}
}