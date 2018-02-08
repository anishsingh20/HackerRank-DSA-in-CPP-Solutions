
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
  queue<node *> q;
  node *temp ;
  if(!root) return;
  
  q.push(root);
    
    while(!q.empty())
    {
        temp = q.front();
        cout<<temp->data<<" "; //visiting the current root
        
        q.pop();
        
        //enquing level +1 children to queue
        if(temp->left)
            q.push(temp->left);
        
        if(temp->right)
            q.push(temp->right);
        
        
    }
  
}
