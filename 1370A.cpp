#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		if(a==1)
			cout<<1<<endl;
		else
		{
		cout<<floor(a/2)<<endl;
	}
	}
	return 0;

}