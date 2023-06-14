class Solution {
public:
    void traverse(TreeNode* n, vector<int>& values){
        if (n == nullptr) return;
        values.push_back(n->val);
        traverse(n->left, values);
        traverse(n->right, values);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> values;
        traverse(root, values);
        sort(values.begin(), values.end());
        int sol = INT_MAX;
        for (int i = 0; i < values.size()-1; i++){
            int k = values[i+1]-values[i];
            if (k < sol) sol = k;
        }
        return sol;
    }
};