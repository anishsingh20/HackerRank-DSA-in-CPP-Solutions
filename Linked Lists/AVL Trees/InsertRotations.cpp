/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */


//we will make rotation functions for every case


int height(node *root)
{
    if(!root)
            return -1;
    
    else return max(height(root->left),height(root->right)) + 1;
    
    
}


node *SingleLeftRotation(node *root)
{
    node *l = root->left;
    root->left = l->right;
    
    //root is now l
    l->right = root;
    //updating heights
    
    root->ht = max(height(root->left),height(root->right)) + 1;
	l->ht = max(height(l->left), root->ht) + 1;
	
	return l;//new root
}

node *SingleRightRotation(node *root)
{
    node *r = root->right;
    root->right = r->left;
    
    //new root is r i.e the right child of node where violation occurs
    r->left = root;
    
    //updating heights
    root->ht = max(height(root->left),height(root->right)) + 1;
	r->ht  = max(height(r->right), root->ht) + 1;

    return r;
}


node *DoubleLeftRightRotation(node *root)
{
    root->left = SingleRightRotation(root);
        
        return SingleLeftRotation(root);
}

node *DoubleRightLeftRotation(node *root)
{
    root->right = SingleLeftRotation(root);
    
    return SingleRightRotation(root);
}



node * insert(node * root,int val)
{
    node *newNode = new node();
    newNode->val = val;
    newNode->left = newNode->right = NULL;
    
   if(root==NULL)
   {
       root = newNode;
       return newNode;
   }
    
    //insert in left subtree
    if(val < root->val)
    {
        root->left = insert(root->left,val);
        
        //after inertion check for balance condition
        
        if(height(root->right) - height(root->left)==2)
        {
            //single left-left rotation 
            if(val < root->left->val)
                    root = SingleLeftRotation(root);
            else
                    root = DoubleLeftRightRotation(root);
        }
    }
    
    //insertion in righ subtree
    if(val > root->val)
    {
        root->right = insert(root->right,val);
        
        //after inertion check for balance condition and necessary rotations
        
        if( (height(root->right) - height(root->left)==2))
        {
            //single right-right rotation 
            if(val > root->right->val)
                    root = SingleRightRotation(root);
            else
                    root = DoubleRightLeftRotation(root);
        }
    }
    
    root->ht = max(height(root->left),height(root->right)) + 1;
    
    return root;
       
    

    
 
  
}
