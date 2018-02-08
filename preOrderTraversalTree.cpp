/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) 
{
    //PRE ORDER TRAVERSAL MEANS 1)visit the current root 2)traverse to the left subtree in preorder 3)visit to the right subtree in preorder
    /*recursive solution
    if(!root) return;
    
    if(root)
    {
        cout<<root->data<<" "; //visit the current root
        //recur to the left subtree
        preOrder(root->left);
        
        //recur to right subtree
        preOrder(root->right);
    }*/
    
    
    stack<node *>s;
    
    while(1)
    {
        
        while(root)
        {
            cout<<root->data<<" ";
            s.push(root);//pusing current root to stack
            
            //move to left subtree and keep pushing until we reach leaf in left subtree
            root = root->left;
            
        }
        
        if(s.empty()) break;
        
        
        //indication that we have completed left subtree and current node 
        root = s.top(); //root now becomes top of stack and we pop from top of stack
        s.pop();
        
        root = root->right;//trverse to the right subtree now
        
    }
   }
