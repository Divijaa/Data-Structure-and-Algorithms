#include<iostream>
using namespace std;
struct ll{
	int data;
	struct ll *next;
};
typedef struct ll node;
node *top = NULL;  //top=head
create()
{
	top=new node;
	cout<<"enter the elememt:";
	cin>>top->data;
	top->next=NULL;
}
push()
{
	if(top==NULL)
	{
		create();
	}
	else
	{
	    node *p;
		p= new node;
		cout<<"enter the element:";
		cin>>p->data;
		p->next=top;
		top=p;	
	}
}
pop()
{
	if(top==NULL)
	{
		cout<<"underflow , stack is empty";
	}
	else
	{
		node *q;
		q=top;
		cout<<"the deleted element is:"<<q->data;
		top=q->next;
		delete(q);
	}
}
display()
{
	if(top==NULL)
	{
		cout<<"the stalk is empty";
	}
	node *p= top;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main()
{
	cout<<"1 for inserting, 2 for deleting , 3 for printing"<<endl;
	int ch;
	do{
		cout<<"enter your choice:";
		cin>>ch;
	switch(ch)
	  {
		case 1: push(); break;
		case 2: pop(); break;
		case 3: display(); break;
		case 4: break;
	  }
    }while(ch!=4);
}
