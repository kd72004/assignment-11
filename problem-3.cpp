#include<bits/stdc++.h>
using namespace std;
string prime_or_not(int  );
int main()
{
    int x;
    cin>>x;
    cout<<prime_or_not(x)<<endl;

}
string prime_or_not(int x)
{
    if(x==1)
    return "NO";
    if(x==2)
    return "Yes";
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        return "NO";
    }
    return "Yes";
}