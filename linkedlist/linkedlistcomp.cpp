#include<iostream>
using namespace std;
struct linklist{
	int data;
	struct linklist *next;
};
typedef struct linklist ll;

void create()
{
	ll *head;
	head = new ll;
	cin>>head->data;
	head->next;
}
void insert_beg(ll *head)
{
	ll *current;
	current= new ll;
	cin>>current->data;
	current->next=head;
	head=current;
}
void insert_end(ll *head)
{
	if(head==NULL)
	{
		create();
	}
	ll *p,*q;
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	q=new ll;
	cin>>q->data;
	q->next=NULL;
    	p->next=q;
}
void insert(ll *head)
{
	ll*current;
	current=head;
	 ll *q;
	 q = new ll;
	 int ele;
	 cout<<"enter the element after which you want to add element:";
	 cin>>ele;
	 while(current->data!=ele)
	 {
	   current=current->next;
	 }
	 cin>>q->data;
	 q->next=current->next;
	 current->next=q;
	 
}
void delete_beg(ll *head)
{
	ll *current;
	current = head;
	current=head->next;
	delete(current);
}
void delete_end(ll *head)
{
	if(head==NULL)
	{
	    cout<<"the list is empty";
	}
	ll *current;
	while(current->next->next!=NULL)
	{
		current=current->next;
	}
	delete(current->next);
	current->next=NULL;
}
void del(ll *head)
{int ele;
	cout<<"enter the element to be deleted:";
	cin>>ele;
	ll *p;
	p=new ll;
	p= head;
	while(p->data!=ele)
	{
		 p=p->next;
	}
	p->next=p->next->next;
	delete(p->next);
}
void print(ll *head)
{
    ll *p;
    p=head;
   do
    {   
	    cout<<p->data;
        p=p->next;
    } while(p->next!= NULL);
}

int main()
{
    int choice;
	cout<<"press 1 for creating"<<endl;
	cout<<"press 2 for insertin in beg"<<endl;
	cout<<"press 3 for inserting in end"<<endl;
	cout<<"press 4for inserting anywhere"<<endl;
	cout<<"press 5 for deleting at beg"<<endl;
	cout<<"press 6 for deleting at end"<<endl;
	cout<<"press 7 for deleting anywhere"<<endl;
	cout<<"press 8 for printing the list"<<endl;
	ll *head;
	head = new ll;
	cin>>head->data;
	head->next;
	
  do{
  	cout<<"enter your choice:";
  	cin>>choice;
  	
  	switch(choice)
  	{
  		case 1:
  			create();
  			break;
  	    case 2:
  			insert_beg(head);
  			break;
		case 3:
  			insert_end(head);
		    break;
		case 4:
		    insert(head);
		    break;
  		case 5:
  			delete_beg(head);
  			break;
  		case 6:
  			delete_end(head);
  	    	break;
  		case 7:
  			del(head);
  			break;
  		case 8 :
  			print(head);
  			break;
  		case 9:
		  break;	 	
	  }
  }while(choice!=9 );
}
