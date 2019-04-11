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



void removeatpos(struct node** head, int pos)
{
    struct node* temp=(*head);
    struct node* prev=temp;
    if(pos==1)
    {
        *head=temp->next;
        free(temp);
        return;
    }
    else{
    for(int i=1;i<=pos-1;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);
    return;
    }
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

//if you want to delete element at 2nd position
removeatpos(&head,2);
show(head);
return 0;
}