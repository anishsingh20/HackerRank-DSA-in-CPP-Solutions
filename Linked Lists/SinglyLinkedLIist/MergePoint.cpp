#include<set>

struct Node {
  Node *next;
  int data;

};

int length(Node *head) {
    int len = 0;
    while(head!=NULL) {
        len++;
        head=head->next;
    }
    
    return len;
}

//METHOD-1 : BRUTE FORCE APPROACH

int FindMergeNode(Node *headA, Node *headB)
{
    	//lengths of lists A and B
	int m = length(headA);
	int n = length(headB);
	
	struct Node *temp = headB;
	//trversing lists
	
	for(int i=0; i < m ;i++) {
		
		//resetting headB to starting node
		headB = temp;
		
		for(int j=0; j < n; j++) {
			//comparing address
			if(headA==headB) {
				//the address or pointer to the merge point
				
				return headA->data;
			}
			
			headB=headB->next;
			
		}
		headA= headA->next;
	}
	return 0;
}
//TIME COMPLEXITY = O(mn) not efficient
   

int FindMergeNode(Node *headA, Node *headB)
{
    //lengths of lists A and B
	int m = length(headA);
	int n = length(headB);
	
	set <Node *> add;
	
	
	//inserting address of nodes in Set
	for(int i = 0 ; i < n ; i++) { //O(nlogn)
		
		add.insert(headB);//O(logn)
		headB = headB->next;
	}
	
	
	for(int i = 0 ; i < m; i++) { //O(mlogn)
		
		//finding address of List A in SET
		if(add.find(headA) != add.end()) { //O(logn)
			
			
			return headA->data;
		}
		
		headA=headA->next;
	}
	
	return 0; //if no merge point
}
//TIME COMPLEXITY = O(nlogn + mlogn) ,SPACE COMPLEXITY = O(n^2)




//BEST METHOD-T(n) = O(m+n) , Space complexity = O(1)

int FindMergeNode(Node *headA, Node *headB)
{
		//lengths of lists A and B
		int m = length(headA);
		int n = length(headB);
		//finding difference in lengths of list A and B
		int d = (n-m);
	
	//if list A is greater in size then simply swap the pointers to head node
	if(m>n) {
	
	  Node *temp = headA;
	  headA=headB;
	  headB=temp;
	  	  
	  int d = (n-m);
	  	
	  
	}
	
	//traversing d nodes in list B to reach at same length of List A
	for(int i=0 ; i<d ; i++) { //O(m+n)
		headB = headB->next;
	}
	
	//now both pointers headA and headB are equidistant from the merge point if any-so we only need a single loop
	
	while( headA!=NULL && headB!=NULL ) {
		
		//comparing the address in lists
		if(headA==headB) {
	
			return headA->data;
		
		}
		headA = headA->next;
		headB = headB->next;
		
	}
	return 0;

}
