#include "Insertion_traversal_and_deletation.cpp"
bool compare(Node *h1,Node *h2)
{
    while(h1!=NULL and h2!=NULL)
    {
        if(h1->data != h2->data) return false;

        h1=h1->next;
        h2=h2->next;
    }

    if(h1==NULL and h2==NULL)
    return true;

    return false;//else
}
int main()
{
    Node *a=new Node(1);
    Node *head=a;
    Node *tail=a;
    insertAtTail(tail,3);
    insertAtTail(tail,3);
    insertAtTail(tail,1);

    Node *b=new Node(1);
    Node *head2=b;
    Node *tail2=b;
    insertAtTail(tail2,3);
    insertAtTail(tail2,3);
    insertAtTail(tail2,1);

    cout<<compare(head,head2);
    return 0;
}
//Identical Linked Lists
//https://practice.geeksforgeeks.org/problems/identical-linked-lists/1/#