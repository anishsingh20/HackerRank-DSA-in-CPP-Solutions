/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *new_node = new Node();
    Node *temp=head,*temp1;
    
    new_node->data = data;
  // Complete this method only
  // Do not write main function. 
    if(position==0) {
        new_node->next = temp;
        head = new_node;
    }
    else {
        int k = 0;
        while((k<position) && temp!=NULL) {
            k++;
            temp1 = temp;
            temp=temp->next;
            }
        new_node->next = temp;
        temp1->next = new_node;
    }
    return head;
}
