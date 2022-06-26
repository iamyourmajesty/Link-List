#include "Insertion_traversal_and_deletation.cpp"
int count_elem(Node *head)
{
    int res=0;
    while(head!=NULL)
    {
        res++;
        head=head->next;
    }
    return res;
}
Node *rev(Node *&head)
{
    Node *prev=NULL;
    Node *curr=head;

    while (curr!=NULL)
    {
        Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
    
}
bool is_palandrom(Node *&head)
{
    if(head->next==NULL) return true;
    else if(head->next->next==NULL)
    {
        //for two element ie 5 5
        if(head->data==head->next->data) return true;
        else return false;
    }



    //divide into two parts
    Node *slow=head;
    Node *fast=head;

    Node *prev=NULL;

    while(fast!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next;
        if(fast->next!=NULL) break;
        fast=fast->next;
        
    }
    Node *temp=slow;
    temp=temp->next;
    slow->next=NULL;

    // Now compare head and temp two list

    temp=rev(temp);

    //for odd number of elements
    int c1=count_elem(head);
    int c2=count_elem(temp);
    if(c1>c2) prev->next=NULL;


    
    Node *lol=head;
    while(lol!=NULL and temp!=NULL)
    {
        if(lol->data != temp->data) return false;

        lol=lol->next;
        temp=temp->next;
    }
    if(lol==NULL and temp==NULL) return true;
    else
    return false;
}
int main()
{
    Node *ptr=new Node(1);
    Node *head=ptr;
    Node *tail=ptr;
    insertAtTail(tail,2);
    // insertAtTail(tail,2);
    insertAtTail(tail,1);

    cout<<is_palandrom(head);
    return 0;
}
// Check if Linked List is Palindrome 
// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1/#