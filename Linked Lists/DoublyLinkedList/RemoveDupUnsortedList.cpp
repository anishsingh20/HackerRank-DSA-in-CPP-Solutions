void RemoveDupUnsorted(Node *head) 
{
	Node *temp = head;
	Node *temp1;
	
	if(head==NULL) {
		
		return;
	}
	
	for(temp=head;temp!=NULL;temp=temp->next) 
	{
		
		temp1 = temp->next;
		
		while(temp1!=NULL) 
		{
			
			if(temp->data == temp1->data) {
				
				
				
				temp->next = temp1->next;
				temp1->next->prev = temp;
				
				cout<<"Deleted:"<<temp1->data<<endl;
				
				delete temp1;
				
			}
			
			else {
				temp1=temp1->next;
			}
			
		}
		
	}
	
}

