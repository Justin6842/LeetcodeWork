class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> sol;
        if (root == nullptr) return sol;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()){
            int levelSize = que.size();
            for (int i = 0; i < levelSize; i++){
                TreeNode* temp = que.front();
                que.pop();
                if (i == levelSize-1) sol.push_back(temp->val);
                if (temp->left != nullptr) que.push(temp->left);
                if (temp->right != nullptr) que.push(temp->right);
            }
        }
        return sol;
    }
};