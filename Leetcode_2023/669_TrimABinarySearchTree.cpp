class Solution
{
public:
   void traverse(TreeNode *n, int low, int high)
   {
      if (n == nullptr)
         return;
      while (n->left != nullptr && n->left->val < low)
      {
         n->left = n->left->right;
      }
      while (n->right != nullptr && n->right->val > high)
      {
         n->right = n->right->left;
      }
      traverse(n->left, low, high);
      traverse(n->right, low, high);
   }
   TreeNode *trimBST(TreeNode *root, int low, int high)
   {
      while (root != nullptr && (root->val < low || root->val > high))
      {
         while (root != nullptr && root->val < low)
         {
            root = root->right;
         }
         while (root != nullptr && root->val > high)
         {
            root = root->left;
         }
      }

      traverse(root, low, high);
      return root;
   }
};