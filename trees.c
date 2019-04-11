#include<iostream>
#include<stdlib.h>
using namespace std;

//node

struct node
{
  int data;
  struct node* left;
  struct node* right;
};

//newNode(k)

struct node* newNode(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

//insert function
/*funda->
1> select direction.
2> In selected direction you will recieve a new subtree make the direction as its root.
3>`if null then add node */

struct node* insert(struct node* temp,int data)
{
      if(temp==NULL)
    return newNode(data);
    
    else if(data < temp->data)
    temp->left=insert(temp->left,data);
    else if(data > temp->data)
    temp->right=insert(temp->right,data);
 
}


//inorder LEFT ROOT RIGHT
void inorder(struct node* node)
{
    if(node==NULL)
    return;
        inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}


//preorder ROOT LEFT RIGHT
void preorder(struct node* node)
{
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}


//postorder LEFT RIGHT ROOT
void postorder(struct node* node)
{
    if(node==NULL)
    return;
        postorder(node->left);
     postorder(node->right);
    cout<<node->data<<" ";
   
}


int main()
{
    struct node* root=NULL;
    root=insert(root,3);
    insert(root,8);
    insert(root,10);
    insert(root,14);
    insert(root,6);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
    
}