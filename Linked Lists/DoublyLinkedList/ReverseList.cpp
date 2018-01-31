Node* Reverse(Node* head)
{
    Node *curr=head;
	Node *temp;
	//CASE-1 -if List is empty
	if(head==NULL) {
		
		
		return head;
	}
	
	
	//if list has only 1 element
	if(curr->next == NULL) {
		
		return head;
	}
	
	else{
	
		while(curr!=NULL) {
			
			temp = curr->prev;
			
			//changing Links
			curr->prev = curr->next; //changing prev to next
			curr->next = temp;//curr next points to its prev node
				
			curr=curr->prev;
		}
		
		    if(temp!=NULL)
		    {
		    	
			temp=temp->prev;
			
		    }
		
    //updating head
		    head = temp;
        return head;
		
    }	
    
   
   
   
}
