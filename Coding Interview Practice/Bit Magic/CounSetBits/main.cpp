#include <bits/stdc++.h>
using namespace std;

int countSet(int n)
{
    int res = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            res++;
        }
        n /= 2;
    }
    return res;
}

int countSetBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        res += (n & 1);
        n /= 2;
    }
    return res;
}

int BrionKerringam(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << countSet(n) << endl;
    cout << countSetBits(n) << endl;
    cout << BrionKerringam(n) << endl;
    return 0;
}