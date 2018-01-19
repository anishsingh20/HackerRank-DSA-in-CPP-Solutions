/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/

Node* Insert(Node *head,int data)
{
    Node *new_node = new Node();
    Node *temp=head;
    new_node->data = data;
  // Complete this method
    if(head==NULL) {
      
        head = new_node;
        new_node->next = NULL;
        
      }
    
    else {
        new_node->next = temp;
        head=new_node;
       
        
    }
     return head;
    
}
