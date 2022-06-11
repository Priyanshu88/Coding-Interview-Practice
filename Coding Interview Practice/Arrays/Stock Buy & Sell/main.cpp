#include<bits/stdc++.h>
using namespace std;

// Naive Solution

int maxProfit(int prices[],int n)
{
    int maxprofit = 0;
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n-1;j++)
        {
            int profit = prices[j] - prices[i];
            if(profit > maxprofit)
            {
                maxprofit = profit;
            }
        }
    }
    return maxprofit;
}

// Efficient Solution

int maxprofit(int price[],int n)
{
    int min_price = INT_MAX;
    int max_profit = 0;
    for(int i= 0;i<n;i++)
    {
        min_price = min(price[i],min_price);
        max_profit = max(max_profit, price[i] - min_price);
    }
    return max_profit;
}

int main()
{
    int prices[] = {7,1,5,3,6,4};
    int n = 6;
    cout << maxProfit(prices,n);
    // cout << maxprofit(prices,6);
    return 0;
}