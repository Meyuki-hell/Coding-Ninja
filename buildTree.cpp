BinaryTreeNode<int>* treeHelper(int *in, int *pre, int inS, int inE, int preS,int preE){
	if(inS > inE){
		return 0;
	}
    int rootData = pre[preS];
    int rootIndex = -1;
    for (int i = inS; i <= inE; i++) {
      if (in[i] == rootData) {
        rootIndex = i;
        break;
      }
    }

    int lInS = inS;                  // left inorder start
    int lInE = rootIndex - 1;        // left inorder end
    int lPreS = preS + 1;            // left preorder start
    int lPreE = lInE - lInS + lPreS; // left preorder end
    int rPreS = lPreE + 1;           // right preorder start
    int rPreE = preE;                // right preorder end
    int rInS = rootIndex + 1;        // right inorder start
    int rInE = inE;                  // right inorder end

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    root->left = treeHelper(in, pre, lInS, lInE, lPreS, lPreE);
    root->right = treeHelper(in, pre, rInS, rInE, rPreS, rPreE);
	
    return root;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
	return treeHelper(inorder, preorder, 0, inLength - 1, 0, preLength - 1);
}
