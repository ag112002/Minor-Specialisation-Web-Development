#include<iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
    
};
struct node *head=NULL;
void create(struct node *);
void display(struct node *);
void insertb(struct node *);

int main()
{ 
  int ch;
  while(1)
{  cout<<"Press 1 to create node,2 to display,3to insert and 0 to exit";
   cin>>ch;
   switch(ch)
      {  case 1:create(head);
                break;
         case 2:display(head);
                 break;
         case 3:insertb(head);
                 break;
         case 0:exit(0);
                 break;
         default:cout<<"Wrong key entered";
      }
}
  return 0;
}
void create(struct node *ptr)
{   int data;
    struct node *temp;
    temp= (struct node *)malloc(sizeof(struct node));
    cin>>data;
    temp->info=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        
    }
    
}
void display(struct node *ptr)
{  
    if(head==NULL)
    {
        cout<<"EMPTY LINKED LIST";
    }
    else
  { ptr=head;
    while(ptr!=NULL)
    {
        cout<<" "<<ptr->info;
       ptr=ptr->next;
    }
  }
}
void insertb(struct node *ptr)
{
    int data;
    struct node *temp;
    temp= (struct node *)malloc(sizeof(struct node));
    cin>>data;
    temp->info=data;
    temp->next=NULL;

    temp->next=ptr;
    head=temp;
}