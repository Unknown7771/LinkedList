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
void insertatHead(LLNode*&head,int data)
{
    LLNode*temp=new LLNode(data);
    temp->next=head;
    head=temp;
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
    insertatHead(head,12);
    printLLNode(head);
}
