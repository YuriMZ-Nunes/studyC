#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

int diameterOfBinaryTree(struct TreeNode* root);
TreeNode* insertIntoTree(struct TreeNode* root, int val);
int diameterFinder(struct TreeNode* root, int* diameter);

int main(){ 
    int diameter;
    struct TreeNode* root = NULL;
    root = insertIntoTree(root, 1);
    root->left = insertIntoTree(root->left, 2); 
    root->right = insertIntoTree(root->right, 3);
    root->left->left = insertIntoTree(root->left->left, 4);
    root->left->right = insertIntoTree(root->left->right, 5);

    diameter = diameterOfBinaryTree(root);

    return diameter;
}

int diameterOfBinaryTree(struct TreeNode* root){
    int diameter = 0;
    diameterFinder(root, &diameter);
    return diameter;
}

int diameterFinder(struct TreeNode* root, int* diameter){
    if(!root)
        return 0;
    
    int leftHeigth = diameterFinder(root->left, diameter);
    int rightHeigth = diameterFinder(root->right, diameter);
    int actualDiameter = leftHeigth + rightHeigth;

    if(*diameter < actualDiameter)
        *diameter = actualDiameter;
    
    if(leftHeigth > rightHeigth)
        return 1 + leftHeigth;
    else return 1 + rightHeigth;
}

TreeNode* insertIntoTree(struct TreeNode* root, int val){
    if(!root){
        TreeNode* newTreeNode = malloc(sizeof(TreeNode));

        newTreeNode->val = val;
        newTreeNode->left = NULL;
        newTreeNode->right = NULL;

        return newTreeNode;
    }

    return root;
}

