/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

long int solve()
{
	int n=100;
	long int s1,s2=0;
	s1=pow(n*(n+1)/2,2);
	for(int i=n;i>=1;--i)
	{
		s2+=pow(i,2);
	}
	return s1-s2;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cout<<solve()<<endl;
	}
	return 0;
}

