// maintain rank array with parent array
// rank is basically the height of the tree

int Parent[n], rank[n];

// initialize the parent array with rank array

void Initialize()
{
    for(int i=0;i<n;i++)
    {
        Parent[i] = i;
        rank[i] = 0;
    }
}



void Union(int x,int y)
{
    
    // find the representative of x and y if they are same then return as they are already in a same set
    
    int x_reps = find(x);
    int y_reps = find(y);
    if(x_reps == y_reps) return;
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