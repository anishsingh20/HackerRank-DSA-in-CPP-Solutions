
//function to count the number of times a number occurs in a list

void CountOccurence(struct Node **head,int data) 
{
	int count = 0 ;
	
	Node *temp=*head;
	Node *temp1;
	
	if(*head==NULL) {
		return ;
	}

	while(temp!=NULL) 
	{
		
		if(temp->data == data) 
		{
			count += 1 ;
		}
		temp = temp->next;
}
	
	//if after traversing count not changed , then not found
	if(count==0) {
		
		cout<<"Not found ."<<endl;
		return;
		
	}
	
	cout<<count;	
	
}
