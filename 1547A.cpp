#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long  int t;
	cin>>t;
	while(t--)
	{
		int Sx,Sy,Tx,Ty,SKx,Sky;
		cin>>Sx>>Sy;
		cin>>Tx>>Ty;
		cin>>SKx>>Sky;
		int minsteps=abs(Tx-Sx)+abs(Ty-Sy);
		if(Sx!=Tx && Sy!=Ty)
		{
			cout<<minsteps<<endl;
		}
		
		else if(((Sx==Tx)&&(SKx<Sx || SKx>Sx))||((Sy==Ty)&&(Sky<Sy || Sky>Sy)))
		{
			cout<<minsteps<<endl;
		}
		else if(((Sx==Tx)&&(Sx==SKx) )|| ((Sy==Ty)&&(Sy==Sky)))
		{
			if(SKx==Sky)
				cout<<minsteps<<endl;
			else
				cout<<minsteps+2<<endl;
		}
		else{
			cout<<"DOREMON"<<endl;
		}
	}
	return 0;
}
