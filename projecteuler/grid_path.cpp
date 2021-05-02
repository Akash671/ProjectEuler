/* author : @akashsaini */

#include<iostream>
using namespace std;

long int solve(long int n)
{
	//const int gridSize = 20;
    long paths = 1;
 
    for (int i = 0; i <n; i++) 
    {
       paths *= (2*n) - i;
       paths /= i + 1;
    }
    return paths;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		cout<<solve(n)<<"\n";
	}
}