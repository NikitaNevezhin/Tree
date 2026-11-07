#include "tree.h"

int NodeInit(TreeNode* node, TreeNode* parent, node_t data)
{
    assert(node);
    // parent is NULL -> node doesn't have a parent -> it is a root of the tree

    node->parent = parent;
    node->left = NULL;
    node->right = NULL;
    node->data = data;

    return 0;
}

int NodeDestroy(TreeNode* node)
{
    if (node == NULL) return 0;  // suppose it is destroyed

    node->data = POIZON;
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;

    return 0;
}

int LinkLeft(TreeNode* parent, TreeNode* child)
{
    assert(parent);
    assert(child);

    parent->left = child;

    return 0;
}

int LinkRight(TreeNode* parent, TreeNode* child)
{
    assert(parent);
    assert(child);

    parent->right = child;

    return 0;
}

void PrintTree(TreeNode* root)
{
    assert(root);

    printf("(");
    printf("%d", root->data);

    if (root->left) PrintTree(root->left);

    if (root->right) PrintTree(root->right);

    printf(")");
}