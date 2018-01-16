/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    
    struct Node *new_node = new Node();
    struct Node* temp = head;
    new_node->data = data;
    
    //case when List is empty
    if(head==NULL) {
        
        head = new_node;
        return head;
        
    }
    
    //insertion at beginning of List
    else if(data < temp->data) {
        new_node->next = temp;
        temp->prev = new_node;
        head =  new_node;
        return head;
    }
    
    //walking with 2 pointers
    else{
        
        struct Node* temp1 = NULL;
        
        //traversing only if new_node has larger data
        while(temp!= NULL && temp->data < data) {
            temp1 = temp;//temp1 is node previous to temp
            temp=temp->next;
        }
        
        //insertion at end of LL
        if(temp==NULL) {
            temp1->next = new_node;
            new_node->prev = temp1;
            new_node->next = NULL;
        }
        
        //insertion in between
        //temp1 is node prev to temp
        //temp is ahead of temp1
        //new_node has to be inserted between temp and temp1
        else{
            temp1->next = new_node;
            temp->prev = new_node;
            
            new_node->next = temp;
            new_node->prev = temp1;
        }
            
            
        
        return head;
        
    }
    
}
    
    
    
