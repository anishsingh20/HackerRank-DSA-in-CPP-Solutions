typedef struct CLLNode {
	int data;
	struct CLLNode* next;
};



//function to find the length of circular list
int LengthList(struct CLLNode *head)
{
	int count = 0;
	struct CLLNode *temp = head;
	if(head==NULL)
	{
		return 0;
	}
	
	else {
		
		while(temp->next != head)
		{
			count++;
			temp=temp->next;
		}
		
	}
	
	return count;
}


//function to split the circular list into 2 halves
void DivideCList(struct CLLNode *head)
{
	struct CLLNode *headA,*headB,*temp=head,*prev;
	if(head==NULL) return ;
	
	int len = LengthList(head); //finding length of CLL
	headA = head;
	
	int l =0, h= (len-1);
	int mid = (l + (h-l)/2); //middle index

	
	//traversing till mid index of list
	for(int i=0 ; i <= mid ;i++)
	{
		cout<<temp->data<<"-->";
		prev = temp; //pointer to the node prev of temp
		temp = temp->next;
	}
	
	prev->next = headA; //made the 1 circular sublist -left sublist


	cout<<endl;
	
	//head of right sublist pointing to temp pointer
	headB = temp;

		
	
	cout<<"Data in right half of sublist is-:"<<endl;
	
	while(temp != head)
	{
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	
	temp->next = headB; //second right circular sublist made
	
}

