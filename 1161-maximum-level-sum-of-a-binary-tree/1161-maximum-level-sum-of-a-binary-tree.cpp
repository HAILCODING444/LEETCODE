/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        // edge case 
        if(root ==NULL) return 0 ; 
        
        queue<TreeNode*> q ; 
        q.push(root) ; 
        int ans = INT_MIN ;
        int level =0 ;
        int cnt = 1 ; 
        while(!q.empty()){
            int sum =0 ; 
            int n = q.size() ;
            for(int i=0 ; i<n ; i++){
                TreeNode* temp = q.front() ; 
                if(temp->left != NULL)  q.push(temp->left) ;
                if(temp->right != NULL) q.push(temp->right);
                
                sum += temp->val ; 
                q.pop() ; 
            }
            if(sum > ans){
                ans = sum ; 
                level = cnt ; 
            } 
            cnt++ ; 
        }
        return level ; 
    }
};