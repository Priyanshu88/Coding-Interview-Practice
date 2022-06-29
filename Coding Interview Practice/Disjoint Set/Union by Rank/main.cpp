int Parent[n], rank[n];


void Initialize()
{
    for(int i=0;i<n;i++)
    {
        Parent[i] = i;
        rank[i] = 0;
    }
}


int find(int x)
{
    if(Parent[x] = x)
    return x;
    else
    return find(Parent[x]);
}

void Union(int x,int y)
{
    int x_reps = find(x);
    int y_reps = find(y);
    if(rank[x_reps] < rank[y_reps]) Parent[x_reps] = y_reps;
    else if(rank[x_reps] > rank[y_reps]) Parent[y_reps] = x_reps;
    else
    {
        Parent[y_reps] = x_reps;
    }
    rank[x_reps]++;
}


// Union by rank gives O(log n) if there are m operations
// then O(m log n) then on an average T.C. O(log n)