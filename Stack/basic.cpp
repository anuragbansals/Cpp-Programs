#include<iostream>
using namespace std;
class stack
{
    public:
    int size;
    int top;
    int *s;
};
void push(stack *st,int x)
{
    if(st->top==st->size-1)
        cout<<"Stack is full"<<endl;
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
    
}
int pop(stack *st)
{
    int x = -1;
    if(st->top==-1)
        cout<<"Stck is empty"<<endl;
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}
int peek(stack *st,int pos)
{
    if(st->top-pos+1<0)
        cout<<"Invalid position"<<endl;
    else
    {
        int x = st->s[st->top-pos+1];
        return x;
    }     
}
int stackTop(stack *st)
{
    if(st->top==-1)
        cout<<"Stack is empty"<<endl;
    else
        return st->s[st->top];
    
}
bool isEmpty(stack *st)
{
    if(st->top==-1)
        return true;
    return false;
}
bool isFull(stack *st)
{
    if(st->top==st->size-1)
        return true;
    return false;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    stack st;
    cout<<"Enter size of stack"<<endl;
    cin>>st.size;
    st.s = new int[st.size];
    st.top = -1;

}