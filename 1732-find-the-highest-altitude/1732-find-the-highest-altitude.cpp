// o (n) Time 
// o(1) space 
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int n = gain.size() ; 
        maxi = max(gain[0] , maxi) ;
        
        for(int i=1 ; i<n ; i++){
            gain[i] += gain[i-1] ; 
            maxi = max(gain[i] , maxi) ; 
        }
        return maxi ; 
    }
};