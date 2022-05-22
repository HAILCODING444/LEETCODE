// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int t[1002][1002] ; 
       memset(t , -1 , sizeof(t)) ; 
       return helper(W , wt , val , n , t); 
    }
    
    int helper(int W, int wt[], int val[], int n , int t[1002][1002]){
        // base case 
        if(n ==0 || W == 0){
            return 0 ; 
        }
        
        // memoization 
        if(t[n][W] != -1){
            return t[n][W] ; 
        }
        
        if(wt[n-1] <= W){
            return t[n][W] = max(val[n-1] + helper(W-wt[n-1] , wt , val , n-1 , t) , helper(W , wt , val , n-1 , t)) ; 
        }else if(wt[n-1] > W){
            return t[n][W] = helper(W , wt , val , n-1 , t) ; 
        }
        
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends