#include <bits/stdc++.h>
using namespace std;
int lcm(int, int);
int main()
{
    int x,y;
    cin>>x>>y;
    cout <<"LCM is = "<<lcm(x, y) << endl;
}
int lcm(int x, int y)
{
    int i = (x > y) ? x : y;
    while (1)
    {
        if (i % x == 0 && i % y == 0)
            return i;
        i++;
    }
    return -1;
}