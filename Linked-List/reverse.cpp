#include<iostream>
#include<stack>
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
    node  *p = new node(d);
    p->next = head;
    head = p;
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
void reverse(node *&head)
{
    node *p = nullptr,*q = nullptr,*r = head;
    while(r!=NULL)
    {
        p = q;
        q = r;
        r = r->next;
        q->next = p;
    }
    head = q;
}
void reverseStack(node *&head)
{
    stack<node *> st;
    node *temp = head;
    // temp = head;
    while(temp!=NULL)
    {
        st.push(temp);
        temp = temp->next;
    }
    head = temp;
    while(!st.empty())
    {
        temp->next = st.top();
        temp = temp->next;
        st.pop();
    }
    temp->next = NULL;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    node *head = NULL;
    create(head,5);
    create(head,6);
    create(head,7);
    create(head,8);
    display(head);
    reverse(head);
    display(head);
    reverseStack(head);
    display(head);
}