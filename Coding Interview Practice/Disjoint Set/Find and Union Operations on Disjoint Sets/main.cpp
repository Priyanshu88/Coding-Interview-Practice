// create parent array of size n same as total no.of elements

int Parent[n];

// initially put array element as array index from starting

void Initialize()
{
    for(int i=0;i<n;i++)
    {
        Parent[i] = i;
    }
}

// if find element x is equal to xth index Parent element
// return x
// otherwise find the Parent[x] recursively

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

// for finding union of x and y 
// store the representative of x after finding x
// then store thr representative of y after finding y
// if they are same return otherwise make y_reps as child of x_reps


void Union(int x,int y)
{
    int x_reps = find(x);
    int y_reps = find(y);
    if(x_reps == y_reps) return;
    Parent[y_reps] = x_reps;
}


// Worst Case Time Complexity : O(n)