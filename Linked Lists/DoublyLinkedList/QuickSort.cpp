/QUICK SORT FOR LINKED LISTS :
//AVERAGE TIME COMPLEXITY = O(nlogn)
//WORST CASE = O(n^2) -when list is already sorted

//Randomized Quick sort would only work if the PIVOT is fixed , not by using Random pivot element-this implementation is not suited for Linked Lists.

//Function to partiton the list and find PIVOT
Node* Partition(Node *l,Node *h) {
	
	int pivot = h->data; //PIVOT is the last node-Right most
	
	Node *Pindex = l->prev; //initially the starting node
	
	
	//traversing the list
	for(Node *j = l ; j!=h ; j=j->next) {
		
		if(j->data <= pivot) {
			
			//similar to incrementing Pindex = Pindex + 1
			Pindex = (Pindex==NULL) ? l : Pindex->next;
			
			swap(j->data,Pindex->data);
			
			
		}
		
	}
	
	Pindex = (Pindex==NULL) ? l : Pindex->next;
	swap(Pindex->data,h->data);
	
	return Pindex; //returns the pointer to PIVOT node	
			
}

//function to return the last node of list
Node *LastNode(struct Node *tail) {
	
	while(tail && tail->next) {
		tail = tail->next;	
	}
	return tail;
}	


void _QuickSort(Node *l,Node *h) {
	
	
	if(h!=NULL &&  l != h &&  l!=h->next) {
		
		//calling partition function to return the pointer to PIVOT
		struct Node *pIndex = Partition(l,h);
		
		//QuickSort on the left of Pindex-PIVOT
		_QuickSort(l,pIndex->prev);
		
		//QuickSort on the Right of Pindex-PIVOT node
		_QuickSort(pIndex->next,h);
		
	}
	
}


//main function to sort list
void QuickSort(struct Node *head) {
	
	Node *temp = LastNode(head);
	
	//temp is the last node
	
	//calling the recursive _quicksort
	_QuickSort(head,temp);
}

