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
show(head);
return 0;
}