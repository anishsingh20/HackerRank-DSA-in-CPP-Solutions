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
