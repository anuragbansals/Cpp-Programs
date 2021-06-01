#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
using namespace std;
class node
{
    public:
    node *next;
    int data;
    node(int key)
    {
        data = key;
        next = NULL;
    }
};
void insertAtHead(node* &head,int data)
{
    node* p = new node(data);
    p->next = head;
    head = p;
}
void insertAtTail(node* &head,int data)
{
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    node *p = new node(data);
    temp->next = p;
}
void insertBeforeKey(node* &head,int k,int key)
{
    node* temp = head;
    while(temp->next->data!=k)
    {
        temp = temp->next;
    }
    node* p = new node(key);
    p->next = temp->next;
    temp->next = p;
}
void insertAtIndex(node* &head,int index,int data)
{
    node* temp = head;
    int i=0;
    while(i!=index-1)
    {
        temp = temp->next;
        i++;
    }
    node* p = new node(data);
    p->next = temp->next;
    temp->next = p;
}
void print(node* &head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    node *head = NULL;
    // int t; cin>>t;
    /*while(t--)
    {
        cout<<"Press 1. Insert head\t 2. Insert Tail\t 3. Delete\t 4. Print\n";
        int n;
        cin>>n;
        switch(n)
        {
            case 1:
            {
                int key;
                cin>>key;
                insertAtHead(head,key);
                break;
            }
            case 4:
            {
                print(head);
            }
        }
    }*/
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtTail(head,50);
    insertAtTail(head,40);
    insertBeforeKey(head,50,30);
    insertAtIndex(head,2,100);
    print(head);
    
}