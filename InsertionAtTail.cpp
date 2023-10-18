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
void insertatTail(LLNode*&tail,int data)
{
    LLNode*temp=new LLNode(data);
    tail->next=temp;
    tail=temp;
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
    LLNode*tail=new LLNode(10);
    LLNode*head=tail;
    insertatTail(tail,12);
    printLLNode(head);
}
