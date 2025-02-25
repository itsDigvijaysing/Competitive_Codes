#include<bits/stdc++.h>
using namespace std;


//  Definition for a binary tree node.
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> levelSum;
        long long currentMax = 0;
        if (root == nullptr) { return 0; }
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if (node == nullptr) {
                levelSum.push_back(currentMax);
                currentMax = 0;
                if (!q.empty()) {
                    q.push(nullptr);
                }
                continue;
            }
            currentMax += node->val;
            if (node->left != nullptr) {
                q.push(node->left);
            }
            if (node->right != nullptr) {
                q.push(node->right);
            }
        }
        sort(levelSum.begin(), levelSum.end(), greater<long long>());
        if (k > levelSum.size()) {
            return -1;
        }
        return levelSum[k - 1];
    }
};

// Code for insertion of nodes in binary tree
int main(){
    // Code for insertion of nodes in binary tree
    vector<int> treeValues;
    int k;
    int value;
    
    // Read the values of the tree nodes
    while (cin >> value) {
        treeValues.push_back(value);
        if (cin.peek() == '\n') break;
    }
    
    // Read the value of k
    cin >> k;

    // Function to insert nodes in binary tree from array
    function<TreeNode*(int)> insertLevelOrder = [&](int i) -> TreeNode* {
        if (i >= treeValues.size() || treeValues[i] == -1) return nullptr;
        TreeNode* root = new TreeNode(treeValues[i]);
        root->left = insertLevelOrder(2 * i + 1);
        root->right = insertLevelOrder(2 * i + 2);
        return root;
    };

    // Create the binary tree
    TreeNode* root = insertLevelOrder(0);

    // Create Solution object and call the function
    Solution sol;
    cout << sol.kthLargestLevelSum(root, k) << endl;
    return 0;
}