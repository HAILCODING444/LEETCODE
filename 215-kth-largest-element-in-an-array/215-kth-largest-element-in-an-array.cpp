class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size() ; 
        priority_queue<int , vector<int> , greater<int>> q ; 
        
        for(int i : nums){
            q.push(i) ; 
            if(q.size() > k){
                q.pop() ; 
            }
        }
        return q.top() ; 
    }
};