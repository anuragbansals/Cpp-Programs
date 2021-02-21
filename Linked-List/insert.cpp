#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void create(node *&head,int d)
{
    node *p = new node(d);
    p->next = head;
    head = p;
}
void insertAtBegin(node *&head,int d)
{
    node *p = new node(d);
    p->next = head;
    head = p;
}
void insertAtEnd(node *&head,int d)
{
    node *p = new node(d);
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    // free(temp);
}
void insertAtMiddle(node *&head,int d)
{
    node *p = new node(d);
    node *temp = head;
    while(temp->data!=3)
    {
        temp = temp->next;
    }
    p->next = temp->next;
    temp->next = p;

}
void display(node *&head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;

}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    node *head = NULL;
    create(head,5);
    create(head,4);
    create(head,3);
    create(head,2);
    create(head,1);
    display(head);
    insertAtBegin(head,0);
    display(head);
    insertAtEnd(head,6);
    display(head);
    insertAtMiddle(head,3);
    display(head);
}
