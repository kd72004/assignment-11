#include<bits/stdc++.h>
using namespace std;
int  number(int ,int);
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<"HCF is = "<<number(n,m)<<endl;
}
int number (int n,int m)
{
    for(int i= n<m? n : m ; i>=1;i--)
    {
        if(n%i==0 && m%i==0)
        return i;
    }
    return -1;
}

