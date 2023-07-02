class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> sol;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()){
            int size = que.size();
            double total{0};
            for (int i = 0; i < size; i++){
                TreeNode* temp = que.front();
                que.pop();
                total += temp->val;
                if (temp->left != nullptr) que.push(temp->left);
                if (temp->right != nullptr) que.push(temp->right);
            }
            sol.push_back(total/size);
        }
        return sol;
    }
};