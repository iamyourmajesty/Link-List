#include "Insertion_traversal_and_deletation.cpp"
bool is_linklist_circular(Node *&head)
{
    Node *lol=head;

    while(lol->next!=NULL)
    {
        if(lol->next==head) return true;
        lol=lol->next;
    }
    return false;
}
int main()
{
    Node *ptr=new Node(5);
    Node *head=ptr;
    Node *tail=ptr;
    insertAtTail(tail,4);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    insertAtTail(tail,9);
    insertAtTail(tail,2);
    insertAtTail(tail,10);

    tail->next=head;
    cout<<boolalpha<<is_linklist_circular(head);
   
    return 0;
}
//Check If Circular Linked List
//https://practice.geeksforgeeks.org/problems/circular-linked-list/1#