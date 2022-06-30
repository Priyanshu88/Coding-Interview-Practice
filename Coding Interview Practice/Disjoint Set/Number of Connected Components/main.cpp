int parent[1000000];


int root(int a)
{
    if(a == parent[a])
    {
        return a;
    }

    return parent[a] = root(parent[a]);
}




void connect(int a, int b)
{
    a = root(a);
}



void connectedComponents(int n)
{
    set<int> s;

    for(int i=0;i<n;i++)
    {
        s.insert(root(parent[i]));
    }

    cout << s.size() << endl;
}



void solution(int n, vector<vector<int>>edges)
{
    for(int i = 0;i<n;i++)
    {
        parent[i] = i;
    }

    for(int i=0;i<edges.size();i++)
    {
        connect(edges[i][0],edges[i][1]);

    }

    connectedComponents(n);
}


