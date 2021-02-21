#include<iostream>
#include<unordered_map>
#include<algorithm>
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
node *first= NULL;
void createA(int *a)
{
    first = new node(a[0]);
    node *temp,*last;
    last = first;
    for(int i=1;i<5;i++)
    {
        temp = new node(a[i]);
        last->next = temp;
        last = temp;
    } 
    temp->next = first->next->next;
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
bool isLoop(node *&head)
{
    unordered_map<node*,bool> map;
    node *temp = head;
    while(temp!=NULL)
    {
        if(map[temp])
            return true;
            
        else
            map[temp] = true;
        temp = temp->next;
    }
    return false;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // node *head = NULL;
    int a[] = {1,2,3,4,5};
    createA(a);
    // display(first);
    if(isLoop(first))
        cout<<"Loop is present";
    else
        cout<<"Loop is not present";    
    
    
}
