#include "Insertion_traversal_and_deletation.cpp"
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // method 1 :- used extra space
    
    
    int res;
    if(head1->data <=  head2->data)
    {
        res=head1->data;
        head1=head1->next;
    }
    else
    {
        res=head2->data;
        head2=head2->next;
    }
    Node *ptr=new Node(res);
    Node *head=ptr;
    Node *tail=ptr;
    
    while(head1!=NULL and head2!=NULL)
    {
        if(head1->data <= head2->data)
        {
            res=head1->data;
            insertAtTail(tail,res);
            head1=head1->next;
        }
        else
        {
            res=head2->data;
            insertAtTail(tail,res);
            head2=head2->next;
        }
    }
    while(head1!=NULL)
    {
            res=head1->data;
            insertAtTail(tail,res);
            head1=head1->next;
    }
    while(head2!=NULL)
    {
            res=head2->data;
            insertAtTail(tail,res);
            head2=head2->next;
    }
    return head;
    
    
    
    
}  
int main()
{
    Node *head1=new Node(1);
    Node *tail1=head1;
    insertAtTail(tail1,2);
    insertAtTail(tail1,4);
    insertAtTail(tail1,7);
    insertAtTail(tail1,9);

    Node *head2=new Node(3);
    Node *tail2=head2;
    insertAtTail(tail2,5);
    insertAtTail(tail2,8);
    insertAtTail(tail2,10);

    Node *ans=sortedMerge(head1,head2);
    print(ans);
    return 0;
}
//Merge two sorted linked lists
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1#