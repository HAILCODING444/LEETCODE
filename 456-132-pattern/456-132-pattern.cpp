// Time o(n)
// space o(n)
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size() ; 
        // base case 
        if(n < 3) return false ; 
        bool flag =0 ;
        
        stack<int> s ; 
        int second = INT_MIN ; 
        for(int i=n-1 ; i>=0 ; i--){
            if(second > nums[i]) return true ; 
            
            while(!s.empty() && nums[i] > s.top()){
                second = max(second , s.top()) ; 
                s.pop() ; 
            }
            
            s.push(nums[i]) ; 
        }
        return false ; 
    }
};