#include "fun.h"

int maxDepth(TLink *tree)
{
    if (!tree) return 0;
    return 1 + max(maxDepth(tree->l), maxDepth(tree->r));
}

int minDepth(TLink *tree)
{
    if (!tree)return 0;
    return 1 + min(minDepth(tree->l), minDepth(tree->r));
}

int Balance(TLink* tree)
{
    return (maxDepth(tree) - minDepth(tree) <= 1);
}