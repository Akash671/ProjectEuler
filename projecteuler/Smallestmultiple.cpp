/* author : @akash kumar */

#include<iostream>
using namespace std;

long int GCD(long int a,long int b)
	{
		if(b==0)
		{
			return a;
		}
		return GCD(b,a%b);
	}



long int LCM(long int a,long int b)
{
	return (a/GCD(a,b))*b;
}


long int solve()
{
	long int a=2;
	for(int i=20;i>2;i--)
	{
		a=LCM(i,a);
	}
	return a;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cout<<solve();
		cout<<endl;
	}
	return 0;
}

