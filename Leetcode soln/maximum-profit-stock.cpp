//brute force 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxSum = 0; 
        int n = prices.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1; j<n; j++){
                if(prices[j]>prices[i])
                {
                    maxSum = max(prices[j]-prices[i],maxSum);
                }
            }
        }
        return maxSum;
    }
};



//Optimal Solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxPrice = 0;
        int minPrice = INT_MAX;
        int n = prices.size();
        
        for ( int i = 0; i<n; i++){
            
            minPrice = min(minPrice, prices[i]);
            maxPrice = max(maxPrice, prices[i] - minPrice);
            
        }
        return maxPrice;
    }
};