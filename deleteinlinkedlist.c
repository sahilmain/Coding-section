#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
int data;
  struct node* next;
};
void insert(struct node** head, int x)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=(*head);
(*head)=temp;
}

void remove(struct node** head,int key)
{
    struct node* temp= (*head);
    struct node* prev= NULL;
    //first 
    if(temp!=NULL && temp->data==key)
    {
        *head=temp->next;
        free(temp);
        return;
    }
    
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    
    if(temp==NULL)
    {cout<<"not found";
        return;
    }
prev->next=temp->next;
free(temp);
}

void show(struct node* last)
{

  while(last->next!=NULL)
  {
  cout<<last->data<<"->";
    last=last->next;
  }
  cout<<last->data;
}

int main()
{
struct node* head=NULL;
  insert(&head,3);
  insert(&head,5);
  insert(&head,7);
  insert(&head,5);
  insert(&head,9);
  remove(&head,3);
show(head);
return 0;
}