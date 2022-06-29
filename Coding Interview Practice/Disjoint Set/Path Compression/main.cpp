int Parent[n];


int find(int x)
{
    if(Parent[x] == x])
    return x;
    Parent[x] = find(Parent[x]);
    return Parent[x];
}