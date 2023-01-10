bool isPresent(TreeNode<int>* root, int x) {
    if (root == NULL){
        return NULL;
    }
   if(root -> data == x){
       return true;
   }
    for(int i = 0; i < root -> children.size(); i++){
       if(isPresent(root-> children[i], x))
            return true;
    }
    return false;
   
    // Write your code here
}
