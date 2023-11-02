void fun(BinaryTreeNode<int> *root , int &count)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->left==NULL && root->right==NULL)
    {
        count++;
        return ;
    }
    fun(root->left,count);
    fun(root->right,count);
    return;
    
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count=0;
    fun(root,count);
    return count;
}

//coding ninjas - count leaf nodes
