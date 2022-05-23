class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size() ;
        priority_queue<pair<int , pair<int , int>>> mheap ; 
        
        for(int i=0 ; i<n ; i++){
            int x = points[i][0] ; 
            int y = points[i][1] ; 
            
            int l = pow(x , 2) + pow(y , 2) ; 
            
            mheap.push({l , {x , y}}) ; 
            if(mheap.size() > k) mheap.pop() ; 
        }
        
        vector<vector<int>> ans; 
        while(mheap.size() != 0){
            vector<int> temp ; 
            temp.push_back(mheap.top().second.first) ; 
            temp.push_back(mheap.top().second.second) ; 
            ans.push_back(temp) ; 
            mheap.pop() ; 
        }
        
        return ans ; 
    }
};