#include<bits/stdc++.h>
using namespace std;
void fibonacci(int );
int main()
{
    fibonacci(10);
}
void fibonacci(int x)
{
    int a=-1,b=+1,c=0;
    while(x)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        x--;
    }
}