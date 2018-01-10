//Creating Node with 2 fields i.e data field and another next field which is a pointer to type Node and stores the address of next node in memory
struct Node
  {
     int data;
     struct Node *next;
  }

//function to reverse 
Node* Reverse(Node *head)
{
  Node *current,*prev,*next;
  current = head;//starting from head 
  prev=NULL;
    while(current!=NULL) {
        
        next=current->next; //moving next to store add of node next to current
        current->next=prev;//making a backwards link
        
        //moving the temp pointers ahead
      
        prev=current; //moving prev to current
        current=next; //moving current to next 
        
    }
    head=prev;  //assigning head as the last node and linked list is now reversed 
    return head;
    
    
}
