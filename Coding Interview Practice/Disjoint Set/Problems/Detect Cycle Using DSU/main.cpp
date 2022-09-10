class Solution
{
    public:

    // finding the parent node by calling the function recursively

    int find_set(int v,vector<int>&parent)
    {
        if(v != parent[v])
        v = find_set(parent[v],parent);
        return v;
    }

    // finding union by merging the lower height tree in higher height tree and increasing the rank or height

    void Union(int x,int y,vector<int>&parent, vector<int>&rank)
    {
        x = find_set(x,parent);
        y = find_set(y,parent);
        if(rank[x] < rank[y])
        {
            swap(x,y);
        }
        parent[y] = x;
        rank[x] += rank[y];
    }

    // for detecting the cycle in undirected graph

    int detectCycle(int V,vector<int>adj[])
    {
        vector<int>parent(V);
        vector<int> rank(V,0);
        map<pair<int,int>,int> mp;
        for(int i=0;i<V;i++)
        {
            parent[i] = i;
            rank[i] = 1;
        }

        // iterating through all edges of graph, finding subset of both vertices of every edge,
        // if both subsets are same, then there is cycle in graph

        for(int u =0;u<V;u++)
        {
            for(auto v:adj[u])
            {
                if(mp.find({u,v}) != mp.end() || mp.find({v,u}) != mp.end())
                continue;
                mp[{v,u}] = 1;
                int x = find_set(u,parent);
                int y = find_set(v,parent);
                if(x == y)
                {

                    // returning 1 if there is a cycle

                    return 1;                    
                }

                Union(u,v,parent,rank);
            }
        }
        return 0;
    }

};