#include <iostream>

#include<stdlib.h>

using namespace std;


struct node

{
    int data;
 
   struct node* next;

};


struct node* newNode(int x)

{

    struct node* temp=(struct node*)malloc(sizeof(struct node));
    
temp->data=x;
 
   temp->next=NULL;
 
   return temp;

}



void insert(struct node** head,int x)

{
struct node* temp=(struct node*)malloc(sizeof(struct node));
  
  temp->data=x;
 
   temp->next=(*head);
  
  (*head)=temp;

}


void show(struct node* temp)

{ 
  
  while(temp!=NULL)
 
   {c++;
  
      cout<<temp->data<<" ";
   
     temp=temp->next;
  
  }
}


void reverse(struct node** head)

{
    struct node* prev=NULL;

    struct node* next=NULL;
  
  struct node* temp=(*head);
  
  
 while(temp!=NULL)
   
 {
    next=temp->next;
  
  temp->next=prev;
    
prev=temp;
 
   temp=next;
    
  
  }

    *head=prev;

}

int main()

{

struct node* head=NULL;

insert(&head,1);

insert(&head,6);

insert(&head,5);

insert(&head,3);

reverse(&head);

show(head);
	
return 0;

}