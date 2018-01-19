/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  Node *tempA,*tempB;
  int data,data1; //temp variables to store data of each node and then compare data in both using these variables
    tempA=headA;//travesing
    tempB=headB;
   
    //traversing L.L A
    while(tempA!=NULL) {
        
        data=tempA->data;//storing data of nodes in a temp var data
        tempA=tempA->next;
        
        
        
    }
    
    //traversing L.L B and storing data in a temp var data
    while(tempB!=NULL) {
        
        data1=tempB->data;//storing data field of nodes in a temp var data1
        tempB=tempB->next;
        
        
    }
    
    
   if(data1==data) {
        return 1;
    }
    
    else return 0;
}
