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
node *first=NULL,*second=NULL,*third=NULL;
void createA(int *a)
{
    first = new node(a[0]);
    node *temp,*last;
    last = first;
    // head->next = p;
    // p->next = head;
    for(int i=1;i<5;i++)
    {
        temp = new node(a[i]);
        last->next = temp;
        last = temp;
    } 

}
void createB(int *b)
{
    second = new node(b[0]);
    node *temp,*last;
    last = second;
    // head->next = p;
    // p->next = head;
    for(int i=1;i<5;i++)
    {
        temp = new node(b[i]);
        last->next = temp;
        last = temp;
    } 
}
void merge(node *&first,node *&second)
{
    node *last = NULL;
    // node *third,*last;
    if(first->data<second->data)
    {
        last = third = first;
        first = first->next;
        last->next = NULL;
    }
    else
    {
        last = third = second;
        second = second->next;
        last->next = NULL;
    }
    while(first && second)
    {
        if(first->data<second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
        if(first) last->next = first;
        if(second) last->next = second;
    }
}
void concat(node *&first,node *&second)
{
    node *temp = first;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = second;
}
void display(node *&head)
{
    node *temp = head;
    while(temp)
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
    int a[] = {2,4,6,8,10};
    int b[] = {1,3,5,7,9};
    createA(a);
    display(first);
    createB(b);
    display(second);
    // concat(first,second);
    // display(first);
    merge(first,second);
    display(third);
    // display(a,b);
}