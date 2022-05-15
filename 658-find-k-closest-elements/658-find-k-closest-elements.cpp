class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size() ; 
        priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int ,int>>> heap ; 
        
        for(int i : arr){
            heap.push({abs(i-x) , i}) ; 
        }
        
        vector<int> ans ; 
        
        while(k--){
            ans.push_back(heap.top().second) ; 
            heap.pop() ; 
        }
        
        sort(ans.begin() , ans.end()) ; 
        
        return ans ; 
    }
};