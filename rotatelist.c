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
void delAtFirst(struct node** head)
{
struct node* temp=(*head);
(*head)=temp->next;
free(temp);
return;
}

struct node* newNode(int x)
{
    struct node* temp=(struct node*) malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    return temp;
}

void rotate(struct node* temp)
{
    int x=0;
   while( (temp)->next !=NULL)
    {
        x= (temp)->data;
    break;
    }
    struct node* node=newNode(x);
    while( (temp)->next!=NULL)
    {
        (temp)=(temp)->next;
    }
   
    (temp)->next=node;
   
    
}

int main()
{
struct node* head=NULL;
  int n;
  //6 5 78 55 1
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      insert(&head,arr[i]);
  }
for(int i=0;i<2;i++)
{
rotate(head);
delAtFirst(&head);
}
show(head);
return 0;
}