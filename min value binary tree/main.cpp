#include <iostream>

using namespace std;

struct btree {
    int value;
    struct btree *left;
    struct btree *right;
};

struct btree * add_node(int x, btree *tree) {
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
};

btree* min_tree(btree *root) {
    if (root->left == NULL) {
        return root;
    }
    return min_tree(root->left);
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
    
    tree.value = nums[0];
    
    for (int i = 1; i < size; i++) {
        add_node(nums[i], &tree);
    }
    
    btree *min_value;
    
    min_value = min_tree(&tree);

    cout << min_value->value << endl;

    return 0;
}

