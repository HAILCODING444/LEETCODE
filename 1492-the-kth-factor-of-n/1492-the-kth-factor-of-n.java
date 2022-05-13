class Solution {
    public int kthFactor(int n, int k) {
        int cnt =0; 
        for(int i=1 ; i <= (int)Math.sqrt(n) ; i++){
            if(n%i == 0){
                cnt++ ; 
                if(cnt == k) return i ; 
            }
        }
        for(int i= (int)Math.sqrt(n) ; i >=1 ; i--){
            if(n%i != 0) continue ; 
            if(i*i == n) continue ;
            if(n % (n/i) == 0){
                cnt++ ; 
                if(cnt == k) return (n/i) ; 
            }
        }
        return -1 ; 
    }
}