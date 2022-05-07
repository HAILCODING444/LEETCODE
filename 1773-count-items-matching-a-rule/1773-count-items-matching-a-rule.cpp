// o (n) time ans o(1) space 
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int idx = -1;
        if(ruleKey =="type") idx = 0 ; 
        else if(ruleKey =="color") idx = 1 ; 
        else idx = 2 ; 
        
        int ans =0; 
        for(int i=0 ; i<items.size() ; i++)
            if(items[i][idx] == ruleValue) ans++ ;
        
        return ans ; 
    }
};