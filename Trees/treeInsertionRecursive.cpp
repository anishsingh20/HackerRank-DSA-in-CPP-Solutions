/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/

//inserting a new node in a level order traversal way
node * insert(node * root, int value) {
    node *new_node = new node();
    
    if(root==NULL)
    {
        new_node->data = value;
        new_node->left = new_node->right = NULL;
        return new_node;
    }
    else
    {
        
        if(root->data >= value)
        {
            root->left = insert(root->left,value);
        }
        else
        {
            root->right = insert(root->right,value);
        }
        
        return root;
    }
   
}
    
