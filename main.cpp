#include "tree/tree.h"

int main(void)
{
    TreeNode root = {};
    NodeInit(&root, NULL, 0);

    TreeNode left_child = {};
    NodeInit(&left_child, &root, 100);

    TreeNode right_child = {};
    NodeInit(&right_child, &root, 200);

    LinkLeft(&root, &left_child);
    TreeGraphDump(&root, "graph_dump.html", __FILE__, __LINE__, __func__);

    LinkRight(&root, &right_child);
    TreeGraphDump(&root, "graph_dump.html", __FILE__, __LINE__, __func__);

    printf("%d\n", root.left->data);
    printf("%d\n", root.right->data);

    PrintTree(&root);

    TreeGraphDump(&root, "graph_dump.html", __FILE__, __LINE__, __func__);

    return 0;
}