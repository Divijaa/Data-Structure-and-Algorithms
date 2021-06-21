#include<iostream>
using namespace std;
struct ll{
	int data;
	struct ll *prev;
	struct ll *next;
};
typedef struct ll node;
node *head=NULL;
void create()
{
	if(head==NULL)
	{
		head= new node;
		cin>>head->data;
		head->next=NULL;
		head->prev=NULL;
	}
	else
	{
	node *p,*q;
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	q=new node;
	cout<<"enter the element:";
	cin>>q->data;
	q->next=NULL;
	q->prev=p;
	p->next=q; 
    }
}
void insert_beg()
{
	node *p;
	p=new node;
	cin>>p->data;
	p->prev=NULL;
	p->next=head;
	head->prev=p;
	head=p;
}
void insert_mid()
{
	int num;
	cout<<"enter the item after which you want to insert the element:";
	cin>>num;
	node *p;
	p=head;
	while(p->data!=num)
	{
		p=p->next;
	}
	node *q;
	q= new node;
	cout<<"enter the element:";
	cin>>q->data;
	p->next->prev=q;
	q->next=p->next;
	p->next=q;
	q->prev=p;
}
void del_beg()
{
	int ele;
	if(head==NULL)
	{
		cout<<"no element to be deleted";
		return;
	}
	node *p;
	p=head;
	ele=p->data;
	head=p->next;
	p->next->prev=NULL;
	delete(p);
	cout<<"deleted element:"<<ele;
}
void del_end()
{
	int ele;
	if(head==NULL)
	{
		cout<<"no element to be deleted";
		return;
	}
	node *p=head;
	if(p->next==NULL)
	{
		 cout<<"deleted element"<<p->data;
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
		cout<<"deleted element"<<ele;
	}
}
void del_mid()
{
	int num;
	if(head==NULL)
	{
		cout<<"no element to be deleted";
		return;
	}
	cout<<"enter the number to be deleted:";
	cin>>num;
	node *p= head;
	node *q;
	while(p->next->data!=num)
	{
		p=p->next;
	}
	q=p->next->next;
	delete(p->next);
	p->next=q;
	q->prev=p;
}
void display()
{
	node *p=head;
	if(p==NULL)
	{
		cout<<"list is empty";
		return;
	}
	while(p!=NULL)
	{
		cout<<" "<<p->data<<endl;
		p=p->next;
	}
	
}
int main()
{
	cout<<"press 1 for creating"<<endl;
	cout<<"press 2 for inserting in beg"<<endl;
	cout<<"press 3 for inserting anywhere"<<endl;
	cout<<"press 4 for deleting at beg"<<endl;
	cout<<"press 5 for deleting at end"<<endl;
	cout<<"press 6 for deleting anywhere"<<endl;
	cout<<"press 7 for printing"<<endl;
	int choice;
  do
  {
  	cout<<"enter your choice:";
  	cin>>choice;
  	switch(choice)
  	{
  		case 1:
  			create();
  			break;
  	    case 2:
  			insert_beg();
  			break;
		case 3:
  			insert_mid();
		    break;
  		case 4:
  			del_beg();
  			break;
  		case 5:
  			del_end();
  	    	break;
  		case 6:
  			del_mid();
  			break;
  		case 7 :
  			display();
  			break;
  		case 8:
		  break;	 	
    }
  }while(choice!=8 );
}


