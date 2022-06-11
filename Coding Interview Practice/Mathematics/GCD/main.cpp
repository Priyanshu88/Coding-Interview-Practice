#include<bits/stdc++.h>
using namespace std;

// Naive solution

int gcd(int a,int b)
{
    int res = min(a,b);
    while(res > 0)
    {
        if(a%res == 0 && b %res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

// Efficient Solutions

int gcd1(int a,int b)
{
    while(a != b)
    {
        if(a > b)
        a = a-b;
        else
        b = b-a;
    }
    return a;
}

int GCD(int a,int b)
{
    if(b == 0)
    return a;
    else
    return GCD(b,a%b);
}

int main()
{
    cout << GCD(18,6);
    return 0;
}