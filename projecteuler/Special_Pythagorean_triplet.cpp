/* author : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

long int solve(int n)
{
	for(int i=10;i<=500;++i)
	{
		for(int j=10;j<=500;++j)
		{
			for(int k=10;k<=500;++k)
			{
				if(i+j+k==1000 && pow(i,2)+pow(j,2)==pow(k,2))
				{
					return i*j*k;
				}
			}
		}
	}
	return 0;
}

int main()
{
	int n=1000;
	cout<<solve(n)<<"\n";
	return 0;
}
