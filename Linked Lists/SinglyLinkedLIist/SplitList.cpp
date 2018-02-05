//function to split the List into 2 halves-used in Merge sort for Linked lists

void SplitList(struct Node *head, Node **headA, Node **headB)
{
	struct Node *temp=head;
	if(head==NULL || head->next == NULL)
	{
		(*headA) = head;
		 (*headB) = NULL;	
		 return;	
	}
	
	(*headA) = head;
	int len = length(head); //O(n)
	
	int l=0,h=(len-1),mid;
	
	//finding mid index of list
	mid = (l + (h-l)/2);
	
	
	for(int i=0;i<mid;i++) 
	{
		
		temp=temp->next;
	}
	
	(*headB) = temp->next;
	
	temp->next = NULL;
	
	
}//TIME COMPLEXITY = O(n) and space consumed by the pointers/references
