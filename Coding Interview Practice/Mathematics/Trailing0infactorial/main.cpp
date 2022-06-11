#include<bits/stdc++.h>
using namespace std;

// Naive Method

int countZero(int n)
{
    int fact = 1;
    for(int i=2;i<=n;i++)
    fact = fact*i;
    int res = 0;
    while(fact%10 == 0)
    {
        res++;
        fact = fact/10;
    }
    return res;
}


// Efficient Method

int countzeros(int n)
{
    int res=0;
    for(int i=5;i<n;i=i*5)
    res = res+n/i;
    return res;
}

int main()
{
    cout << countzeros(25);
    return 0;
}