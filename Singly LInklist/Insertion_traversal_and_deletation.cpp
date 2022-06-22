/* Lecture 1st
Insertion :-
             1. insertion at Head 
             2. insertion at tail 
             3. insertion at any postion

 traversal:- while(lol!=NULL)

 deletation :-
               1. delete head element
               2. delete tail element
               3. delete element at any position             
*/
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(Node* &tail,int data)
{
    Node *temp=new Node(data);
    
    tail->next=temp;
    
    tail=temp;
}
void print(Node * &head)
{
    Node *lol=head;
    while(lol!=NULL)
    {
        cout<<lol->data<<" ";
        lol=lol->next;
    }
    cout<<endl;
}
void deleteHead(Node * &head)
{
    Node *temp=head;
    head=head->next;
    delete temp;
}
void deleteAnyPos(Node * &head,int target)
{
    if(head->data==target)
    {
        //delete head
        deleteHead(head);
        return;
    }
    Node *prev=head;
    Node *curr=head->next;
    while(curr->data!=target && curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr->data != target)
    {
        cout<<"target Not found"<<endl;
        return;
    }
    Node *temp=curr;
    prev->next=curr->next;
    delete temp;
}
/*
int main()
{
    Node *ptr=new Node(5);
    Node *head=ptr;
    Node *tail=ptr;
    
    
    for(int i=ptr->data+5;i<=30;i=i+5)
    {
        insertAtTail(tail,i);
    }
    
    delete head
    deleteAnyPos(head,6);
    print(head);
    return 0;
}             */