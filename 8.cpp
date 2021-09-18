#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;
};
struct node *head=NULL;
void create (struct node *);
void display (struct node *);
void insertb (struct node *);
void inserte(struct node *);
int main()
{   while(1)
    {int ch;
    cout<<"Press 1 to create node\n 2 to display\n 3 to insert in beginning\n 4 to insert at end\n 5 to exit"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:create(head);
        break;
        case 2:display(head);
        break;
        case 3:insertb(head);
        break;
        case 4:inserte(head);
        break;
        case 5:exit(0);
        default:cout<<"Wrong message displayed"<<endl;
    }
    }
}
void create(struct node *ptr)
{   
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    int data;
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
        cout<<"Empty Linked List";
    }
    else
  {     ptr=head;
        while(ptr!=NULL)
    {
        cout<<ptr->info;
        ptr=ptr->next;
    }
  }
}
void insertb(struct node *ptr)
{
    struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node *));
    cin>>data;
    temp->info=data;
    temp->next=NULL;
    temp->next=ptr;
    head=temp;
}
void create(struct node *ptr)
{   
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    int data;
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