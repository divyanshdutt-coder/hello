#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function to check height and balance
int checkHeight(TreeNode* root) {
    if (!root) return 0;

    int leftHeight = checkHeight(root->left);
    if (leftHeight == -1) return -1; // Left subtree not balanced

    int rightHeight = checkHeight(root->right);
    if (rightHeight == -1) return -1; // Right subtree not balanced

    if (abs(leftHeight - rightHeight) > 1) return -1; // Current node not balanced

    return max(leftHeight, rightHeight) + 1;
}

// Main function to check if tree is balanced
bool isBalanced(TreeNode* root) {
    return checkHeight(root) != -1;
}

// Example usage
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->left->left = new TreeNode(5); // Unbalanced

    if (isBalanced(root))
        cout << "The tree is balanced." << endl;
    else
        cout << "The tree is NOT balanced." << endl;

    return 0;
}
