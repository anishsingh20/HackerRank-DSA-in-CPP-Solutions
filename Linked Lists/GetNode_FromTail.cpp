//HACKERRANK SOLUTION TO GET NODE VALUE FROM TAIL OF LINKED LIST

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  
 */ 
  struct Node
  {
     int data;
     struct Node *next;
  }


//TIME COMPLEXITY OF THIS SOLUTION-O(n) -as we traverse the linked list only once, n = size of linked list

int GetNode(Node *head, int posFromTail) {
	
	int index = 0;
	
	Node *temp=head, *result=head;
	
	//traversing the list
	while(temp!=NULL) 
	{
		if(index++ > posFromTail) 
		{
			result=result->next;
			
		}
		
		
		temp=temp->next;
	}
	
	return result->data;
	
	
	
}
