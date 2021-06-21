#include<iostream>
using namespace std;
struct ll{
	int data;
	struct ll *next; 
};
typedef struct ll node;
node *head=NULL; 
void reverse()
{
	node *p, *q;
	p=NULL;
	q=NULL;
	while(head!=NULL)
	{
		q=head->next;
		head->next=p;
		p=head;
		head=q;
	}
}
void del_whole()
{
	node *p=head;
	while(p!=NULL)
	{
		p=p->next;
		delete(head);
		head=p;
	}
}
void create() //also includes if we wnat to add anywhere
{
	if(head==NULL)
	{
       head= new node;
	   cout<<"enter the data:";
	   cin>>head->data;
	   head->next=NULL;		
	}
	else
	{
		node *p=head,*q;
		while(p->next!=NULL)
		{
			p=p->next;
		}
			q= new node;
			cout<<"enter the elemnent:";
			cin>>q->data;
			q->next=NULL;
			p->next=q;
	}
}
void display()
{
	if(head==NULL)
	{
		cout<<"whole list is deleted";
		return;
	}
	node *p=head;
	while(p!=NULL)
	{
		cout<<" "<<p->data;
		p=p->next;
	}
}
void insert_beg()
{
	node *p;
	p= new node;
	cin>>p->data;
	p->next=head;
	head=p;
}
void insert_mid()
{
	int num;
	cout<<"enter the number after which you want to enter the node:";
	cin>>num;
	node *p=head;
	while(p->data!=num)
	{
		p=p->next;
	}
	node *q;
	q= new node;
	cout<<"enter the data:";
	cin>>q->data;
	q->next=p->next;
	p->next=q;
}
void del_beg()
{
	if(head==NULL)
	{
		cout<<"no elements to be deleted";
		return;
	}
	node *p=head;
	int ele=p->data;
	head=p->next;
	delete(p);
	cout<<"deleted element"<<ele;
}
void del_end()
{
	if(head==NULL)
	{
		cout<<"no elements to be deleted";
		return;
	}
	node *p=head;
	if(p->next==NULL)
	{
		cout<<"deleted item"<<p->data;
		delete(p);
		head=NULL;
	}
	else
{
	while(p->next->next!=NULL)
	{
		p=p->next;
	}
	int ele;
	ele=p->next->data;
	delete(p->next);
	p->next=NULL;
	cout<<"deleted element:"<<ele;
}
}
void del_mid()
{
	int num;
	if(head==NULL)
	{
		 cout<<"no elements to be deleted";
		 return;
	}
	cout<<"enter the element to be deleted:";
	cin>>num;
	node *p=head,*q;
	while(p->next->data!=num)
	{
		p=p->next;
	}
	q=p->next->next;
	delete(p->next);
	p->next=q;
	
}
int main()                 
{
    int ch;
    cout<<"1: create 2: display 3: insert_beg 4: insert_mid 5: del_beg 6: del_end 7: del_mid 8: reverse 9: del_whole";
  do{
      printf("\nEnter the choice ");
      cin>>ch; 
      
      switch(ch)
      {
          case 1: create(); break; // head node and insert at the end of the list
          case 2: display(); break;
          case 3: insert_beg(); break;
          case 4: insert_mid(); break;
          case 5: del_beg();break;	
          case 6: del_end();break;
          case 7: del_mid(); break;
          case 8: reverse();break;
          case 9: del_whole();break;
          case 10: break;
      }
  }while(ch!=10);
    return 0;
}
