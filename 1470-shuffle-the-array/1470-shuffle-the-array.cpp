// o (n) time 
// o (n) space 
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n) ; 
        int k =1 ; 
        for(int i=0 ; i<n ; i++){
            ans[2*i] = nums[i] ; 
            ans[k] = nums[i+n] ; 
            k+=2 ; 
        }
        return ans ; 
    }
};