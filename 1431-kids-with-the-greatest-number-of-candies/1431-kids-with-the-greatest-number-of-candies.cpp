// o n time 
// o n space 
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size() ; 
        vector<bool> ans; 
        int maxi = INT_MIN ; 
        for(auto &i : candies) maxi = max(i , maxi) ; 
        
        for(auto &i : candies){
            if(i + extraCandies >= maxi) ans.push_back(true) ; 
            else ans.push_back(false) ; 
        }
        return ans ; 
    }
};