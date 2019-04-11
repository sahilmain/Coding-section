#include <iostream>
using namespace std;

int top=-1;

bool isfull(int n)
{
    if(top==n-1)
    return true;
    else
    return false;
}
bool isempty(int stack[])
{
    if(top==-1)
    return true;
    else
    return false;
}
void push(int stack[],int n,int data)
{
    if(isfull(n))
    {
        cout<<"stack overflow"<<endl;
        return;
    }
    top++;
    stack[top]=data;
}

void pop()
{
    if(isempty(stack))
    {
        cout<<"stack underflow"<<endl;
        return;
    }
    top--;
}


int main()
{
    int n=3;
int stack[n];
push(stack,n,3);
cout<<"size currently="<<top+1<<endl;
push(stack,n,10);
cout<<"size currently="<<top+1<<endl;
push(stack,n,30);
cout<<"size currently="<<top+1<<endl;
pop();
cout<<"size currently="<<top+1<<endl;
	return 0;
}