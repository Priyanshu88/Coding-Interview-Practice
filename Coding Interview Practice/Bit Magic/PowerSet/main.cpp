#include <bits/stdc++.h>
using namespace std;

void PowerSet(char *set, int n)
{
    int powSize = pow(2, n);
    int counter, j;
    for (counter = 0; counter < powSize; counter++)
    {
        for (j = 0; j < n; j++)
        {
            if (counter & (1 << j))
            {
                cout << set[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    char set[] = {'a', 'b', 'c'};
    PowerSet(set, 3);
    return 0;
}
