//function to insert in a Sorted linked list
void sortedInsert(struct Node** head,int data) {
	struct Node *new_node = new Node();//allocating memory
	struct Node *curr = *head;
	
	new_node->data = data;
	
	//case1 if list is empty or if new_node has smaller data then one at head of LL
	if( *head==NULL) {
		new_node->next = *head;
		*head = new_node;
	
	}
	//insertion at beginning of list
	else  if( (*head)->data >= data ) 
	
	{
		new_node->next = *head; //or curr
		*head  = new_node;
		
	}
	
	else {
		
		//we traverse the list only if new node has larger data
		while(curr->next!=NULL && curr->next->data < data) {
		
			curr=curr->next;
		}
		
		//new node has larger data then curr , so new node will be inserted after curr node
		new_node->next = curr->next;
		curr->next = new_node;	
		
	}
	
}
	   
	   	
