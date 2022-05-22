//  accepted but very slow solution 
class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        int count= ans(nums , target , 0 , 0) ; 
        return count ; 
    }
    private int ans(int [] arr , int target ,int sum , int idx){
        if(idx == arr.length){
            if(sum == target){
                return 1 ; 
            }else{
                return 0 ; 
            }
        }
        
        int left =ans(arr , target , sum+arr[idx] , idx+1) ; 
        int right =ans(arr , target , sum-arr[idx] , idx+1) ; 
        
        return left + right ; 
    }
}