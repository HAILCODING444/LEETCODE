// o nsq sol can be faster 
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size() ;
        int m = accounts[0].size() ; 
        int ans = -1 ;
        for(int i=0 ; i<n ; i++){
            int sum =0 ; 
            for(int j=0 ; j<m ; j++){
                sum += accounts[i][j] ; 
            }
            ans = max(sum , ans) ; 
        }
        return ans ; 
    }
};