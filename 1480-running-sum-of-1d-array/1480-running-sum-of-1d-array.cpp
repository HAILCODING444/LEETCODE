// Time o(n)
// space o(1)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size() ; 
        for(int i=1 ; i<n ; i++){
            nums[i] += nums[i-1] ; 
        }
        return nums ; 
    }
};


/*  using c++ STL 
class Solution {
public:
    vector<int> runningSum(vector<int>& A) {
        partial_sum(begin(A), end(A), begin(A));
        return A;
    }
};

*/