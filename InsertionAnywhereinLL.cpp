#include <bits/stdc++.h>
using namespace std;
class LLNode
{
    public:
    int data;
    LLNode*next;
    LLNode(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
int length(LLNode*temp)
{
    int counter=0;
    while(temp!=NULL)
    {
        counter++;
        temp=temp->next;
    }
    return counter;
}
void insertAtHead(LLNode*&head,int data)
{
    LLNode*temp=new LLNode(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(LLNode*&tail,int data)
{
    LLNode*temp=new LLNode(data);
    tail->next=temp;
    tail=temp;
}
void insertatPosition(int position,LLNode*&head,int data,LLNode*&tail)
{   
    if(position==1)
    {
        insertAtHead(head,data);
        return ;
    }
    if(position-1>=length(head))
    {
        insertAtTail(tail,data);
        return ;
    }
    int counter=1;
    LLNode*temp=head;
    LLNode*h1=new LLNode(data);
    while(counter<position-1)
    {
        counter++;
        temp=temp->next;
    }
    h1->next=temp->next;
    temp->next=h1;
}
void printLLNode(LLNode*&head)
{
    LLNode*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main() {
    LLNode*head=new LLNode(10);
    LLNode*node1=new LLNode(11);
    LLNode*node2=new LLNode(15);
    LLNode*node3=new LLNode(7);
    LLNode*tail=node3;
    head->next=node1;
    node1->next=node2;
    node2->next=node3;
    int pos;
    cin>>pos;
    insertatPosition(pos,head,5,tail);
    printLLNode(head);
}
