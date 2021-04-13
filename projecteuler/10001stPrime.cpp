/* author : @akash kuamr */

#include<iostream>
using namespace std;

int prime(long int n)
{
    for(long int i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void solve()
{
    int c=1;
    long int b=0;
    for(long int i=3; ;i++)
    {
        if(prime(i))
        {
            c++;
            if(c==10001)
            {
                b=i;
                break;
            }
        }
    }
    cout<<b;
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
