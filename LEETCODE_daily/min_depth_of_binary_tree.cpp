// Given a binary tree, find its minimum depth.
// The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
// Note: A leaf is a node with no children.
// Input: root = [3,9,20,null,null,15,7]
// Output: 2

 int minDepth(TreeNode* root) {
    if(root==NULL) return 0;
    else if(root->right==NULL && root->left==NULL) return 1;
    else if(root->left==NULL) return minDepth(root->right)+1;
    else if(root->right==NULL) return minDepth(root->left)+1;
    return min(minDepth(root->left),minDepth(root->right)) +1; 
    }