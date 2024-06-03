class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        int sol{0};
        int solSum{INT_MIN};
        int cur{0};
        while(!que.empty()){
            cur++;
            int curSum = 0;
            int curSize = que.size();
            for (int i = 0; i < curSize; i++){
                TreeNode* temp = que.front();
                que.pop();
                curSum += temp->val;
                if (temp->left != nullptr) que.push(temp->left);
                if (temp->right != nullptr) que.push(temp->right);
            }
            if (curSum > solSum){
                solSum = curSum;
                sol = cur;
            }
        }
        return sol;
    }
};