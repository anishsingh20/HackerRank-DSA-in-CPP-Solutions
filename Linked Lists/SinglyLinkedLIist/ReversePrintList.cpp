/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include<stack>
stack<int>s;
void ReversePrint(Node *head)
{
    //we will use a Auxillary stack to print elements of linked list in reverse order
  // This is a "method-only" submission. 
  // You only need to complete this method.
    Node *temp=head;
    if(head==NULL) {
        return;
    }
    while(temp!=NULL) {
        //pushing data to Stack
        s.push(temp->data);
        temp=temp->next;
        
    }
   
    //now stack has elements of list in reverse order, top of stack has last element of list
    while(!s.empty()) {
        int data1 = s.top();
        cout<<data1<<endl;
        s.pop();
        
        
      }
    
    
    


       
    
    
}
