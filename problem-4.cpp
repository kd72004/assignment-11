#include<bits/stdc++.h>
using namespace std;
int next_prime (int );
int main()
{
    int x;
    cin>>x;
    cout<<next_prime(x)<<endl;
}
int next_prime(int x)
{
    int flag=0;
    for(int i=x+1; ;i++)
    {
        for(int n=2;n<=i/2;n++)
        {
            if(i%n==0)
            flag=1;
        }
        if(flag==0)
        return i;
    }
}