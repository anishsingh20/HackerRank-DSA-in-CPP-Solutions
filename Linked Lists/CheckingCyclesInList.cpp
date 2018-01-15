/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    
    Node *temp=head;//slower pointer
    Node *temp1=head;//faster pointer
    //initially both at head
    
    if(head==NULL){
    return false;
    }
    
    
        //traversing the list and checking for cycles
        while(temp!=NULL && temp1!=NULL)
        {
            temp = temp->next;
            
            //temp1 always moves fast than temp and is 1 step ahead
            temp1 = temp1->next->next;
            
            //if both pointers have same address stored , this means there is a cycle and pointing to a same node
            if(temp1 == temp) {
                return true;
                }
            
         }
    
        return false;
    
    
}         
           
        
        
   
