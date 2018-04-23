/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    
  // Complete this method
    struct Node *temp1 = new Node(); //allocating new memory

    
    struct Node *temp;
    
    temp1->data = data;
    
    if(head==NULL) {
        
        
        head = temp1;
      
        return head;
        }
    
    
    temp = head;
    //traversing the list till last node
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next = temp1;
    temp1->next = NULL;
    
    return head;
    
    
    
}
