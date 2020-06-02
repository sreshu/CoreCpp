BinaryTreeNode<int>* searchInBST(BinaryTreeNode<int> *root, int k){
    if(root == NULL){
        return NULL;
    }
    if(root -> data == k){
        return root;
    }
    else if(k < root -> data) {
        return searchInBST(root -> left, k);

    }
    else {
        return searchInBST(root -> right, k);
    }
}