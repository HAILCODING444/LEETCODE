// o n sq solution 
// needs optimisation 
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = index.size() ; 
        vector<int> ans(n , -1) ;
        for(int i=0 ; i<n ; i++){
            if(ans[index[i]] == -1){
                ans[index[i]] = nums[i] ; 
            }else{
                for(int j=n-1; j>index[i]; j--){
                    ans[j] = ans[j-1] ; 
                }
                ans[index[i]] = nums[i] ; 
            }
        }
        return ans ; 
    }
};

