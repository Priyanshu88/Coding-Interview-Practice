//

int Parent[n];

// 

void Initialize()
{
    for(int i=0;i<n;i++)
    {
        Parent[i] = i;
    }
}

//

int find(int x)
{
    if(Parent[x] == x)
    {
        return x;
    }
    else
    {
        return find(Parent[x]);
    }
}

//

void Union(int x,int y)
{
    int x_reps = find(x);
    int y_reps = find(y);
    if(x_reps == y_reps) return;
    Parent[y_reps] = x_reps;
}


// Worst Case Time Complexity : O(n)