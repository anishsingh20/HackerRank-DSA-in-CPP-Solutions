/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) 
{
    stack<node *> s;
    for( ; ; )
    {
        while(root)
        {
            s.push(root);
            //traverse to the left subtree and keep pushing to stack until root is null
            
            root = root->left;
        }
        
        if(s.empty()) break; //if stack gets empty break out of loop
        
        //pop of from stack and visit the current root
        root = s.top();
        s.pop();
        
        cout<<root->data<<" ";
        
        root = root->right; //traverse to the right subtree
        
        
        
    }
    
    
    /*recursive solution
    
    if(root)
    {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
    
    */

}
