struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  Node *current,*prev,*next;
  current = head;//starting from head 
  prev=NULL;
    while(current!=NULL) {
        
        next=current->next; //moving next to store add of node next to current
        current->next=prev;//making a backwards link
        prev=current; //moving prev to current
        current=next; //moving current to next 
        
    }
    head=prev;    
    return head;
    
    
}
