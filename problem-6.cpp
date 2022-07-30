#include<bits/stdc++.h>
using namespace std;
void prime_between_two_number(int , int );
int main()
{
    prime_between_two_number(10,50);
}
void prime_between_two_number(int x,int y)
{
    int flag;
    for(int i=x;i<=y;++i)
    {
        flag=0;
        for(int n=2;n<i;++n)
        {
            if(i%n==0)
            flag=1;
        }
        if(flag==0)
        cout<<i<<endl;
    }
}