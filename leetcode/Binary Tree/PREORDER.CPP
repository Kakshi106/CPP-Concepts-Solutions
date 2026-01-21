#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> result;
        traverse(root , result);
        return result;
    }
private:
    void traverse(TreeNode* node, vector<int> &root){
        if (node == NULL)
            return ;
        root.push_back(node->val);

        traverse(node->left, root);

        traverse(node->right, root);
    }
};