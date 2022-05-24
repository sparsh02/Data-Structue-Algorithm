// You are given an array of size ‘N’. The elements of the array are in the range from 1 to ‘N’.
// Ideally, the array should contain elements from 1 to ‘N’. But due to some miscalculations, there is a number R in the range [1, N] which appears in the array twice and another number M in the range [1, N] which is missing from the array.
// Your task is to find the missing number (M) and the repeating number (R)


//time_complexity = O(n)
//space complexity = O(n)

//using one more array and using count

#include <bits/stdc++.h> 
#include <stdio.h>

using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int n1 = arr.size() + 1;
        vector<int> subs(n1 , 0);
        
        pair<int,int> ans;
        
        for(int i=0;i<arr.size();i++)
        {
            subs[arr[i]]++;
        }
        
        for(int i=1; i<=arr.size(); i++)
        {
            if(subs[i] == 0)
            {
                ans.first = i;
            }
            
            if(subs[i]>=1)
            {
                ans.second = i;
            }
        }
        
        return ans;
        
       
 	
}
