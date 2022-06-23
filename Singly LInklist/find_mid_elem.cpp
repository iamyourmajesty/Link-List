#include "Insertion_traversal_and_deletation.cpp"
int mid_elem(Node *&head)
{
    Node *slow=head;
    Node *fast=head;

    while(fast->next!=NULL)
    {
        slow=slow->next;

        fast=fast->next;
        if(fast->next==NULL) break;
        fast=fast->next;
    }
    return slow->data;

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
    // insertAtTail(tail,10);
    cout<<mid_elem(head);
    return 0;
}
//Finding middle element in a linked list  gfg practice
//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1/