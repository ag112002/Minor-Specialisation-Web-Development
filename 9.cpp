#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *next;
};
struct node *head;
void create(struct node *);
void display(struct node *);
void insertb(struct node *);
void inserte(struct node *);
void insertp(struct node *);
void insertpb(struct node *);
void insertpa(struct node *);
int main()
{
      while(1)
    {
        int ch;
        cout<<endl<<"Press 1 to create node\n 2 to display\n 3 to insert in beginning\n 4 to insert at end\n 5 to insert at any particular position\n0 to exit"<<endl;
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
        case 5: insertp(head);
        break;
        case 6:exit(0);
        break;
        default:cout<<"Wrong message displayed"<<endl;

      }
    }
    return 0;
}
void create(struct node *ptr)
{
    int data;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
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
    int data;
    struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node *));
    cin>>data;
    temp->info=data;
    temp->next=NULL;
    temp->next=ptr;
    head=temp;
}
void inserte(struct node *ptr)
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
void insertp(struct node *)
{ struct node *temp,*ptr;
  temp=(struct node*)malloc(sizeof(struct node));
    int pos,i,data;
    cin>>pos;
    i=1;
    temp->info=data;
    temp->next=NULL;
    while(i<pos-1)
    { 
        ptr=ptr->next;
       
    }
     temp->next=ptr->next;
        ptr->next =temp;
    i++;
}
