// create parent array of size n

int Parent[n];

// if xth index element is equal to the find element x 
// return x
// otherwise find parent[x] recursively and assign it parent[x]
// (all the nodes which are on the path from which you called the find function to the
// root they are going to have parent as root)
int find(int x)
{
    if(Parent[x] == x])
    return x;
    Parent[x] = find(Parent[x]);
    return Parent[x];
}


// T.C. union by rank and path compression
//  for m operations on n elements
// O(m*(alpha)n)
// (alpha)n <=4 
// (alpha)n = inverse ackermannn
