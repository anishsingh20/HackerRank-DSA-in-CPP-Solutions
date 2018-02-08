
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) 
    {
        if(root)
        {
            int max , htR, htL;
            //recur to left subtree and find height of left subtree till it reaches leaf
            htL = height(root->left);
            
            //recur to right subtree and find height of right subtree till it reaches leaf
            htR = height(root->right);
            
            if(htL > htR)
            {
                max = htL;
            }
            else {
                max = htR;
            }
            
            return 1 + max;
         }
        
        else {
            return -1;
        }
        
        
    }
        
        
        
        
    
