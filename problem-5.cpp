#include<bits/stdc++.h>
using namespace std;
void prime_number(int );
int main()
{
    prime_number(10);
}
void prime_number(int x)
{
    int flag;
    for(int i=2;i<=x;++i)
    {
        flag=0;
        for(int n=2 ; n<i ; ++n)
        {
            if(i%n==0)
            flag=1;
        }
        if(flag==0)
        cout<<i<<endl;

    }
}