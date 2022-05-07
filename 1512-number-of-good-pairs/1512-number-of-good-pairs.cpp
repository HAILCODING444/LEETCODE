// o(n) time 
// o(n) space  
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size() ; 
        unordered_map<int , int> mp ; 
        int ans =0 ; 
        for(auto &i : nums){
            if(mp.find(i) != mp.end()){
                ans += mp[i] ; 
            }
            mp[i]++ ; 
        }
        return ans ; 
    }
};

/*
// brute force 
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0 ; 
        for(int i=0 ; i<nums.size()-1 ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums[i] == nums[j]) count++ ; 
            }
        }
        return count ; 
    }
};

*/

