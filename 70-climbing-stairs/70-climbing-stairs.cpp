// best sol in o(n) time and o(1) space 
class Solution {
public:
    int climbStairs(int n) {
        int a =1 , b = 1 ; 
        if(n ==0 || n==1) return 1 ; 
        
        int steps = 0 ; 
        for(int i=2 ; i<=n ; i++){
            steps = a + b ; 
            a =b ; 
            b = steps ; 
        }
        return steps ; 
    }
};