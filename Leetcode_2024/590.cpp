/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> search(vector<int> output, Node* node){
        for (int i = 0; i < node->children.size(); i++){
            output = search(output, node->children[i]);
        }
        output.push_back(node->val);
        return output;
    }
    vector<int> postorder(Node* root) {
        vector<int> sol;
        if (root == NULL) return sol;
        sol = search(sol, root);
        return sol;
    }
};