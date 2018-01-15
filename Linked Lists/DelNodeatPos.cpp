/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node* temp = head;
    Node* temp1;
    if (position==0) {
         head = temp->next;
         delete(temp);   
    }
    else{ 
        int k=0;
        //will handle both deletion at tail and intermediate position
        while((k<position)&& temp!=NULL) {
            k++;
            temp1 = temp; //temp1 is the node prev to temp
            temp = temp->next;
        }
             temp1->next = temp->next;
             delete(temp);
      }
    return head;
}
