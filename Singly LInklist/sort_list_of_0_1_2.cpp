#include "Insertion_traversal_and_deletation.cpp"
void sort(Node *&head)
{
    // method 1
    Node *lol=head;
    int zero=0;
    int one=0;
    int two=0;
    while(lol!=NULL)
    {
        if(lol->data==0) zero++;
        else if(lol->data==1) one++;
        else two++;
        
        lol=lol->next;
    }
    
    int i=0;
    lol=head;
    while(i<zero)
    {
        lol->data=0;
        lol=lol->next;
        i++;
    }
    i=0;
    while(i<one)
    {
        lol->data=1;
        lol=lol->next;
        i++;
    }
    i=0;
    while(i<two)
    {
        lol->data=2;
        lol=lol->next;
        i++;
    }
    return;
    
}
int main()
{
    Node *ptr=new Node(0);
    Node *head=ptr;
    Node *tail=ptr;
    
    insertAtTail(tail,2);
    insertAtTail(tail,0);
    insertAtTail(tail,1);
    insertAtTail(tail,2);
    
    sort(head);
    
    print(head);
    return 0;
}    
//Given a linked list of 0s, 1s and 2s, sort it.
//https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1