/Sorted insertion in a Circular linked list

void SortedInsert(struct CLLNode **head,int data) 
{
	
	struct CLLNode *new_node = new CLLNode();
	new_node->data = data;
	new_node->next = new_node;

	struct CLLNode *curr = (*head);

	struct CLLNode *prev;	
	
	
		
	//CASE1-if List is empty
	if( (*head) == NULL) {
		
		(*head) = new_node;
		
	}
	
	// CASE2-insertion at beginning
	else if(data < (*head)->data) 
	{
		//tail a pointer to last node
		CLLNode *tail = *head;
		while(tail->next != (*head) ) {
			tail = tail->next;
		
		}
		
			new_node->next = *head;
			tail->next = new_node;
			*head = new_node;
			
	}
		
		
	//CASE3 -Insertion at end or intermediate position- 2 METHODS
	//we simply nedd to find the appropiate node after which the new_node has to be inserted
	else {
		
		
		//METHOD-1
		while(curr->next!=(*head) && curr->data < data)  {
			
			prev = curr; //node prev to curr
			curr = curr->next; 
		}
		
		//now curr has data which is  > data
		
		//if curr is last node and curr->data < data
		if(curr->next == (*head) && curr->data < data ) {
			
			new_node->next = (*head);
			curr->next = new_node;
	
			
		}
		
		
		//CASE-4 :(prev->data < data < curr->data ) -insertion in middle
		//otherwise new_node inserted between prev and curr. 
		else {
			prev->next = new_node;
			new_node->next = curr;
			
		}
		
		
		
	//METHOD-2
//		//curr is the node after which new node has to be inserted
//		while(curr->next != *head && curr->next->data < data) {
//				
//				curr=curr->next;
//				
//			}
//			
//		new_node->next = curr->next;
//		curr->next = new_node;
			
			
	}
			 
			
}

