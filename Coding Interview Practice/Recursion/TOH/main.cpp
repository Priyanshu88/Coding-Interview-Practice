#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char source, char auxiliary, char target)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }
    TOH(n - 1, source, target, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    TOH(n - 1, auxiliary, source, target);
}

int main()
{
    int n = 3; // Number of disks
    char source = 'A', auxiliary = 'B', target = 'C';
    TOH(n, source, auxiliary, target);
    return 0;
}
