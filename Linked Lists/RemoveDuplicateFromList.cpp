/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *temp=head;
    Node *temp1;
    
    //traversing and finding duplicate elements in list
    while(temp->next!=NULL) {
        //temp1 is the node next to temp
        temp1=temp->next;
        //checking if temp and temp1 have same data
        if(temp->data == temp1->data) {
            //duplicate node
            temp->next = temp1->next;
            delete temp1;
            
        }
        //otherwise simple traverse
          else{  
           temp=temp->next; 
          }
       }
    return head;
        
}
