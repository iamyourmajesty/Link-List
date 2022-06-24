#include "Insertion_traversal_and_deletation.cpp"
Node* rev(Node *&head,int k)
{
    Node *prev=NULL;
    Node *curr=head;

    int i=0;
    while(curr!=NULL && i<k)
    {
        Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        i++;
    }
    if(curr!=NULL)
    head->next=rev(curr,k);
    return prev;
}
int main()
{
    Node *ptr=new Node(6);
    Node *head=ptr;
    Node *tail=ptr;
    insertAtTail(tail,5);
    insertAtTail(tail,3);
    insertAtTail(tail,2);
    insertAtTail(tail,4);
    insertAtTail(tail,7);

    int k=3;
    head=rev(head,k);

    print(head);
}
//Reverse a Linked List in groups of given size
//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1#