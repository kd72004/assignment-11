#include<bits/stdc++.h>
using namespace std;

// int  sum_of_series(void );
int  factorail(int );
int main()
{
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        sum=sum+(factorail(i)/i);
    }
    cout<<sum<<endl;
}
// int  sum_of_serise(void)
// {
//     int sum=0;
//     for(int i=1;i<=5;i++)
//     {
//         sum=sum+(factorail(i)/i);
//     }
//     return sum;
// }
int  factorail(int x)
{
    int fact=1;
    for(int i=x;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}