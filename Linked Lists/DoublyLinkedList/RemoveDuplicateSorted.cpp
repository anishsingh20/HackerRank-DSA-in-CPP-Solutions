void RemoveDuplicate(Node *head) {
	
	Node *temp=head;
	Node *temp1;
	
	//list empty
	if(head==NULL) {
		return;
	}
	
	//traversing the list and searching for duplicates
	while(temp->next!=NULL) {
		
		temp1 = temp->next;
		
			if(temp->data == temp1->data) 
			{
				
				temp->next = temp1->next;
				temp1->next->prev = temp;
				
				cout<<"Deleted Duplicate:"<<temp1->data<<endl;
				
				delete temp1;
				
			}
			
			else {
				temp=temp->next;
			}
	}
}
