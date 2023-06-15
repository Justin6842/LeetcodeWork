class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        std::queue<TreeNode*> que;
        que.push(root);
        int sol{0};
        int solSum{INT_MIN};
        int cur{0};
        int curSum;
        int curSize;
        while(!que.empty()){
            cur++;
            curSum = 0;
            curSize = que.size();
            for (int i = 0; i < curSize; i++){
                TreeNode* temp = que.front();
                curSum += temp->val;
                if (temp->left != nullptr){
                    que.push(temp->left);
                }
                if (temp->right != nullptr){
                    que.push(temp->right);
                }
                que.pop();
            }
            if (curSum > solSum){
                solSum = curSum;
                sol = cur;
            }
        }
        return sol;
    }
};