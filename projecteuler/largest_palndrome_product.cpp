#include<iostream>
using namespace std;

int pal(long int n)
{
	long int N=n;
	long int rev=0;
	while(n)
	{
		int r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(N==rev)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void solve()
{
	for(int i=999;i>99;--i)
	{
		for(int j=999;j>99;--j)
		{
			long int p=i*j;
			if(pal(p))
			{
			     cout<<i<<"*"<<j<<"="<<p<<" ";
			}
		}
		cout<<endl;
	}
	//return 0;
			
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<endl;
	}
	return 0;
}

