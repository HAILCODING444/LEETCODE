// o (n) time 
// o (1) space 
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> v(101 , 0) ; 
        
        for(int i : nums) v[i]++ ; 
        
        for(int i=1 ; i<v.size() ; i++) v[i] +=v[i-1] ; 
        
        for(int i=0 ; i<n ; i++){
            if(nums[i] == 0) continue ; 
            nums[i] = v[nums[i]-1] ;
        }; 
        
        return nums ; 
    }
};

/*
// better code visibility nd comments 
// optimised solution 
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int v[101] = {0 , 0 , 0} ; 
        int n = nums.size() ; 
        // incrementing the count 
        for(int i=0 ; i<n ; i++){
            v[nums[i]]++ ; 
        }
        // taking runnuing sum 
        for(int i=1 ;i<101 ; i++){
            v[i] = v[i] + v[i-1] ; 
        }
        // getting the answer 
        for(int i=0 ; i<n ; i++){
            if(nums[i] == 0){
                continue ; 
            }
            nums[i] = v[nums[i]-1] ; 
        }
        return nums ; 
    }
};


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans (nums.size()) ; 
        for(int i=0 ; i<nums.size() ; i++){
            int count = 0 ; 
            for(int j=0 ; j<nums.size() ; j++){
                if(nums[i] > nums[j]) count++ ; 
            }
            ans[i] = count ; 
        }
        return ans ; 
    }
};
*/