class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        priority_queue<pair<int ,int> , vector<pair<int, int>> , greater<pair<int ,int>>> mheap ; 
        
        for(int i : nums){
            mheap.push({abs(i-0) , i}) ; 
        }
        
        int x = mheap.top().first ; 
        int ans = INT_MIN ; 
        while(1){
            // edge case 
            if(mheap.size() ==0) break ; 
            if(mheap.top().first != x) break ;
            ans = max(ans , mheap.top().second) ; 
            mheap.pop() ; 
        }
        
        return ans ; 
    }
};