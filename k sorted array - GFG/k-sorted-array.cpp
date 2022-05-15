// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    
    int BinarySearch(vector<int> &v , int target , int n){
        int s =0 ; 
        int e = n-1 ; 
        
        while( s<=e){
            int mid =  s+ (e-s) /2 ; 
            
            if(v[mid] == target) return mid ; 
            
            if(v[mid] < target)  s = mid +1 ; 
            else if(v[mid] > target) e = mid-1 ; 
        }
        
        return -1 ; 
    }
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        vector<int> v ; 
        for(int i=0 ; i<n ; i++){
            v.push_back(arr[i]) ; 
        }
        
        sort(v.begin() , v.end()) ; 
        bool flag = 1 ; 
        for(int i=0 ; i<n ; i++){
            int  x = BinarySearch(v , arr[i], n) ; 
            if(abs(x-i) > k) flag = 0 ; 
        }
        
        if(!flag) return "No" ; 
        return "Yes" ; 
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}  // } Driver Code Ends