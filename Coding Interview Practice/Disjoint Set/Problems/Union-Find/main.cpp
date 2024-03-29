#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find root of a node.

    int find(int i, int par[], int rank1[])
    {

        // we keep moving forward till the value of the index and the value in the array is same

        if (i == par[i])
            return i;
        par[i] = find(par[i], par, rank1);
        return par[i];
    }

    // Function to merge two nodes a and b.

    void union_(int a, int b, int par[], int rank1[])
    {

        // find root of nodes a and b.

        a = find(a, par, rank1);
        b = find(b, par, rank1);

        // if they are already in same set.

        if (a == b)
            return;

        // checking for rank, and putting in set with higher rank.

        if (rank1[a] >= rank1[b])
        {
            rank1[b] += rank1[a];
            par[b] = a;
        }

        else
        {
            rank1[a] += rank1[b];
            par[a] = b;
        }
        return;
    }

    // Function to check whether 2 nodes are connected or not.

    bool isConnected(int x, int y, int par[], int rank1[])
    {
        int n1 = find(x, par, rank1);
        int n2 = find(y, par, rank1);

        // if root of both nodes is same then they are connected.

        return (n1 == n2);
    }
};

class Solution
{
public:
    int find(int par[], int x)
    {
        if (par[x] == x)
        {
            return x;
        }
        return find(par, par[x]);
    }

    // Function to merge two nodes a and b.
    void union_(int a, int b, int par[], int rank1[])
    {
        int a_parent = find(par, a);
        int b_parent = find(par, b);
        if (a_parent == b_parent)
        {
            return;
        }
        if (rank1[a_parent] >= rank1[b_parent])
        {
            rank1[a_parent] += rank1[b_parent];
            par[b_parent] = a_parent;
        }
        else
        {
            rank1[b_parent] += rank1[a_parent];
            par[a_parent] = b_parent;
        }
    }

    // Function to check whether 2 nodes are connected or not.
    bool isConnected(int x, int y, int par[], int rank1[])
    {
        int node1 = find(par, x);
        int node2 = find(par, y);
        return node1 == node2;
    }
};

// Time Complexity: O(N + Q).
// Expected Auxiliary Space: O(1).