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
