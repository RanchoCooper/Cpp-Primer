/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-07 15:39:35
**  
**  @status  solved
**  @brief
**  
**/

#include "ex13_28.h"

TreeNode& TreeNode::operator(const TreeNode &rhs) {
    ++*rhs.count;
    if (--*count == 0) {
        if (left) {
            delete left;
        }
        if (right) {
            delete right;
        }
        delete count;
    }
    value = rhs.value;
    left = rhs.left;
    right = rhs.right;
    return *this;
}

BinStrTree& BinStrTree::operator=(const BinStrTree &bst) {
    TreeNode *new_root = new TreeNode(*bst.root);
    delete root;
    root = new_root;
    return *this;
}


int main(int argc, char const *argv[]) {
    
    getchar();
    return 0;
}