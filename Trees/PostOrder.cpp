/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void postOrder(node *root) {
    
    stack<node *> s;
    node *prev=NULL; //a pointer to keep track of previously traversed node
    do
    {
        while(root!=NULL)
        {
            s.push(root);

            //traverse to the left subtree
            root = root->left;
        }

        while(!s.empty() && root==NULL)
        {
            root = s.top();

            if(root->right==NULL || root->right == prev)
            {

                cout<<root->data<<" "; //now visit the current root
                //pop from stack
                s.pop();

                prev = root;
                root = NULL;

             }
            else 
            {
                root = root->right;

            }
        }
    } while(!s.empty());

}
