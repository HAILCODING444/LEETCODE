// struct Comp{
//     bool operator()(const pair<int,string>& lhs, const pair<int,string>& rhs)const{
//             if(lhs.first != rhs.first)
//                 return lhs.first < rhs.first;
//             return lhs.second > rhs.second;
//         }   
// };


// class cmp{
//   public:
//     bool operator()(const pair<int , string> &a, pair<int , string> &b){
//         if(a.second == b.second)
//         {
//             return a.first < b.first;
//         }
//         return a.second < b.second;
//     }
// };


class comp{
    public : 
     
    bool operator()(pair<int ,string> &a , pair<int , string> & b){
        if(a.first == b.first){
            return a.second < b.second ;
        }
        
        return a.first > b.first ; 
    }
};


class Solution {
public: 
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int> mp ; 
        
        for(string s : words){
            mp[s]++ ; 
        }
        //greater<pair<int ,string>>
         priority_queue<pair<int,string> ,vector<pair<int ,string>> , comp> mheap;
        // priority_queue<pair<int , string>> mheap ; 
        for(auto &i : mp){
            mheap.push({i.second , i.first}) ; 
            if(mheap.size() > k) mheap.pop() ; 
        }
        
        vector<string> ans(k) ;
        for(int i=0 ; i<k ; i++){
            ans[i] = mheap.top().second ; 
            mheap.pop() ; 
        }
        reverse(ans.begin() , ans.end()) ; 
        return ans ; 
    }
};