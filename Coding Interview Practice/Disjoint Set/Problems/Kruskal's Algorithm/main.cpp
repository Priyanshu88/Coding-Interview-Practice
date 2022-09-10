#include<bits/stdc++.h>
using namespace std;

// initialize disjoint set data structure

class DSU
{
    int *Parent;
    int *Rank;
    public:
    DSU(int n)
    {
        Parent = new int[n];
        Rank = new int[n];

        for (int i=0;i<n;i++)
        {
            Parent[i] = -1;
            Rank[i] = -1;
        }
    }

    // find function by path compression technique

    int find(int i)
    {
        if(Parent[i] == -1)
        {
            return i;
        }
        return Parent[i] = find(Parent[i]);
    }

    // union by rank implementation

    void Union(int x,int y)
    {
        int x_reps = find(x);
        int y_reps = find(y);
        if(x_reps != y_reps)
        {
            if(Rank[x_reps] < Rank[y_reps])
            {
                Parent[x_reps] = y_reps;
                Rank[y_reps] += Rank[x_reps];
            }
            else
            {
                Parent[y_reps] = x_reps;
                Rank[x_reps] += Rank[y_reps]; 
            }
        }
    }
};

// graph class

class Graph
{
    vector<vector<int>> edgeList;
    int v;

    public:
    Graph(int v)
    {
        this->v = v;
    }

    // for 

    void addEdge(int x,int y,int w)
    {
        edgeList.push_back({w,x,y});
    }

    void Kruskals_mst()
    {
        sort(edgeList.begin(),edgeList.end());

        DSU s(v);
        int res = 0;
        cout << "These are the edges in the constructed MST" << endl;
        for (auto edge:edgeList)
        {
            int w = edge[0];
            int x = edge[1];
            int y = edge[2];


            if(s.find(x) != s.find(y))
            {
                s.Union(x,y);
                res += w;
                cout << x << " -- " << y << " == " << w << endl;
            }
        }
        cout << "Minimum cost spanning Tree: " << res;
    }
};


int main()
{

    int n, m;
    cin >> n >> m;

    Graph g(n);
    
    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin >> x >> y >> w;
        g.addEdge(x,y,w);
    }
    
    g.Kruskals_mst();


    // Graph g(4);
    
    // g.addEdge(0,1,10);
    // g.addEdge(1,3,15);
    // g.addEdge(2,3,4);
    // g.addEdge(2,0,6);
    // g.addEdge(0,3,5);
    
    // g.Kruskals_mst();
    return 0;
}



















#include<bits/stdc++.h>
using namespace std;

// function to implement find root method