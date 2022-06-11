#include<bits/stdc++.h>
using namespace std;

// Iterative

int factorial(int n)
{
    int res = 1;
    for(int i=2;i<=n;i++)
    res = res*i;
    return res;
}

// Recursive

int fact(int n)
{
    if(n == 0)
    return 1;
    return n*fact(n-1);
}

int main()
{
    //cout << factorial(7);
    cout << fact(7);
    return 0;
}