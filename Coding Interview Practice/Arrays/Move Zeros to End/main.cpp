#include<bits/stdc++.h>
using namespace std;

// Naive Solution

void Move0toEnd(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            for(int j =i+1;j<n;j++)
            {
                if(arr[j] != 0)
                swap(arr[i],arr[j]);
            }
        }
    }
}
// O(n2)

// Efficient Solution

void Move0toend(int arr[], int n)
{
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

// O(n)

int main()
{
    int arr[] = {0,1,0,3,12};
    int n = 5;
    Move0toend(arr,n);
    for (int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}