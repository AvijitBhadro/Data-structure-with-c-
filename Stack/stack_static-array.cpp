#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
class Stack
{
public:
    int a[MAX_SIZE];
    int stack_size ;
    Stack()
    {
        stack_size = 0;

    }
    //O(1)
    void push(int val)
    {
        if(stack_size+1>MAX_SIZE)
        {
            cout<<"stack is full!\n";
            return;
        }
        stack_size+=1;
        a[stack_size-1] = val;
    }
    int top()
    {
        if(stack_size==0)
        {
            cout<<"stack is empty\n";
            return -1;
        }
        return a[stack_size-1];
    }
    //O(1)
    void pop()
    {
        if(stack_size == 0)
        {
            cout<<"stack is empty\n";
            return;
        }
        a[stack_size-1]=0;
        stack_size = stack_size -1;
    }

};




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Stack st;
    cout<<st.top()<<"\n";
    st.push(5);
    st.push(2);
    st.push(7);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();



}
