#include<iostream>
#include<climits>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void create(int a[],int n,Node *&head)
{
    int i;
    Node *temp,*last;
    head = new Node(a[0]);
    last = head;
    for(i=1;i<n;i++)
    {
        temp = new Node(a[i]);
        last->next = temp;
        last = temp; 
    }
}

void countNode(Node *&head)
{
    Node *temp = head;
    int c = 0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    cout<<"Total nodes are "<<c<<endl;
}

void calSum(Node *&head)
{
    Node *temp = head;
    int sum = 0;
    while(temp!=NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    cout<<"Sum of nodes is "<<sum<<endl;
}

void getMax(Node *&head)
{
    Node *temp = head;
    int maxx = INT_MIN;
    while(temp!=NULL)
    {
        if(temp->data>maxx)
            maxx = temp->data;
        temp = temp->next;
    }
    cout<<"Max element is "<<maxx<<endl;
}
void display(Node *&head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<", ";
        temp = temp->next;
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    Node *head = NULL;
    int a[] = {1,2,3,4,5};
    create(a,5,head);
    countNode(head);
    calSum(head);
    getMax(head);
    // display(head);
    return 0;
}