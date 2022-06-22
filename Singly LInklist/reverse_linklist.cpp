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
void insertAtTail(Node * &tail,int data)
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