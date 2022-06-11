#include<bits/stdc++.h>
using namespace std;

// Naive Solution
// Function for finding leaders of the element

void Leaders(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
	     bool flag = false;
          for(int j=i+1;j<n;j++)
   	   	{
   	   		if(arr[i] <= arr[j])
			{
			 	flag = true;
		          break;
		     }
		}
	 	if(flag = false)
   		{
		    	cout << arr[i] <<" " << endl;
		}
    }
}

// Efficient Solution

void Leaders(int arr[],int n)
{
	int curr_leader = arr[n-1];
	cout << curr_leader << " ";
	for(int i=n-2;i>=0;i--)
	{
		if(curr_leader < arr[i])
		{
			curr_leader = arr[i];
			cout << curr_leader << " ";
		}
	}
}

// main code 

int main()
{
	int arr[] = {1,2,3,4,0};
	int n = sizeof(arr[n])/sizeof(arr[0]);
	Leaders(arr,n);
	return 0;
}
