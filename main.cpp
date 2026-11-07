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
    LinkRight(&root, &right_child);

    TreeNode left_left_child = {};
    NodeInit(&left_left_child, &left_child, 300);

    TreeNode left_right_child = {};
    NodeInit(&left_right_child, &left_child, 400);

    LinkLeft(&left_child, &left_left_child);
    LinkRight(&left_child, &left_right_child);

    TreeNode right_left_child = {};
    NodeInit(&right_left_child, &right_child, 500);

    TreeNode right_right_child = {};
    NodeInit(&right_right_child, &right_child, 600);

    LinkLeft(&right_child, &right_left_child);
    LinkRight(&right_child, &right_right_child);

    TreeGraphDump(&root, "graph_dump.html", __FILE__, __LINE__, __func__);

    return 0;
}