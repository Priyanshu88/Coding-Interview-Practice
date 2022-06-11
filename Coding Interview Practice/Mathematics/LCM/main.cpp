#include <bits/stdc++.h>
using namespace std;

// Naive Solution

int LCM(int a,int b)
{
    int res = max(a,b);
    while(true)
    {
        if(res % a==0 && res%b == 0)
        return res;
        res++;
    }
        return res;
}

// Efficient Method

int gcd(int a,int b)
{
    if(b == 0)
    return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    cout << lcm(16,4);
    return 0;
}