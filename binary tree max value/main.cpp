#include <iostream>

using namespace std;

struct btree {
    int value;
    btree *left;
    btree *right;
};

btree* add_node(int x, btree *tree) {
    if (tree == NULL) {
        tree = new btree;
        tree->value = x;
        tree->left = NULL;
        tree->right = NULL;
    } else if (x < tree->value) {
        tree->left = add_node(x, tree->left);
    } else {
        tree->right = add_node(x, tree->right);
    }
    return tree;
}

btree* max_value(btree *tree) {
    if (tree->right == NULL) {
        return tree;
    }
    return max_value(tree->right);
}


int main() {
    struct btree tree;
    tree.left = NULL;
    tree.right = NULL;
    
    int size = 0;
    cin >> size;
    int nums[size];
    
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    
    btree *max;
    
    tree.value = nums[0];
    
    for (int i = 1; i < size; i++) {
        add_node(nums[i], &tree);
    }
    
    max = max_value(&tree);
    
    cout << max->value << endl;
    
    return 0;
}
