#include<bits/stdc++.h>
using namespace std;

// iterative

int countDigits(int n)
{
    int count = 0;
    while(n != 0)
    {
        n=n/10;
        count++;
    }
    return count;
}

// Recursive

int countdigits(int n)
{
    if(n == 0)
    return 0;
    return 1+countdigits(n/10);
}

// Logarithmic Solution

int CountDigits(int n)
{
    return floor(log10(n)+1);
}

int main()
{
    cout << CountDigits(2356);
    return 0;
}

