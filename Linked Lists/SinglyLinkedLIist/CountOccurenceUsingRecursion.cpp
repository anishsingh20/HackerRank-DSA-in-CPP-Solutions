int countOccUsingRecursion(Node *head,int data)
{

//	if(!head) return 0;
	//need to use static variable- ot maintain 1 copy of count
	static int count = 0 ;
	
	if(head)
	{
	
		if((head)->data==data)
		{
			count++;
		}
		
		//otherwise recursively traverse the list and check for matches and increment count 
		
		countOccUsingRecursion(head->next,data);
			
	}
	
	return count;
	
}
