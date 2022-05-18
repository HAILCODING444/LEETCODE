class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int ,vector<int> ,greater<int>> mheap;
        
        for(int i : nums){
            mheap.push(i) ; 
            if(mheap.size() > 2) mheap.pop() ; 
        }
        
        int x = mheap.top() ; 
        mheap.pop() ; 
        int y = mheap.top() ; 
        mheap.pop() ; 
        
        int ans = (x-1) * (y-1) ; 
        
        return ans ; 
    }
};