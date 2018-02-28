/*
struct node
{
    int data;
    node* left;
    node* right;
};

TOP VIEW- we print those nodes which are the topmost and the first ones at that particular HORIZONTAL DISTANCE in the TREE

//this method only valid for FULL or STRICT BINARY TREES
void left(node *root)
{
    if(root->left)
            left(root->left);
    
    cout<<root->data<<" ";
}

void right(node *root)
{
    cout<<root->data<<" ";
    if(root->right)
        right(root->right);
}

void topView(node *root)
{
    
   
    if(root->left)
        left(root->left);
    cout<<root->data<<" ";
   if(root->right)
        right(root->right);
       
        
   
    
   
    
}*/


//THIS METHOD VALID FOR ANY KIND OF BINARY TREE
void topView(node *root)
{
	if(!root) return ;
	
	map<int,int>TreeMap;
	
	queue< pair<node* ,int> > q; //making a queue with 2 fields
	
	q.push(make_pair(root,0)); //hd of root is 0
	
	while(!q.empty())
	{
		
		//now popping the front of queue
		pair<node *,int>p = q.front();
		node *temp= p.first;  
		int hd = p.second;
		q.pop();
		
		
		//if HD not found in MAP, that means it is the first HD in tree and store it in map and also print it,
		//to print the topmost root in HD
		if(TreeMap.find(hd)==TreeMap.end())
		{
			TreeMap[hd] = temp->data;
			
			cout<<temp->data<<" ";
		}
		
		//otherwise simply push left and right subchilds in queue like we do in any level order traversal
		
		if(temp->left)	q.push(make_pair(temp->left,hd-1)); //for left edge push left and hd-1
		
		
		if(temp->right)	q.push(make_pair(temp->right,hd+1)); //for right push right in queue and its hd+1
		
		
	}
	
	
	
}


