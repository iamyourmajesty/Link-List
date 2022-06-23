#include "Insertion_traversal_and_deletation.cpp"
Node* reverse(Node * &head)
{
    
    Node *prev=NULL;
    Node *curr=head;
    
    while(curr!=NULL)
    {
        Node *forward=curr->next;//connection tutnay s phalay hi apn curr ka next store kr latay hai
        curr->next=prev;
        
        prev=curr;
        
        curr=forward;
        
        
    }
    
   return prev;
}
int main()
{
    Node *ptr=new Node(6);
    Node *head=ptr;
    Node *tail=ptr;
    
    insertAtTail(tail,2);
    insertAtTail(tail,9);
    insertAtTail(tail,7);
    insertAtTail(tail,8);
    head=reverse(head);
    print(head);
    
    return 0;
}
//Reverse a linked list
//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1/