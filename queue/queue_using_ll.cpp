#include<iostream>
using namespace std;
struct ll{
	int data;
	struct ll *next;
};
typedef struct ll node;
node *f =NULL;
node *r  =NULL;
enqueue()
{
	node *n = new node;
	if(f==NULL)
	{
		f=n;
		r=n;
	}
	cin>>n->data;
	r->next=n;
	r=n;
}
dequeue()
{
	if(f==NULL)
	{
		cout<<"underflow";
	}
	else
	{
		node *n;
		n=f;
		cout<<n->data;
		f=n->next;
		delete(n);
	}
}
peek()
{
	if(f==NULL)
	{
		cout<<"no element in the queue";
	}
	cout<<f->data;
}
print()
{
	if(f==NULL)
	{
		cout<<"no element in the queue";
	}
	else
	{
		node *n=f;
	    while(n!=r)
		{
			cout<<n->data<<" ";
			n=n->next;
		}cout<<n->data;
	}
}
int main ()
{
	int choice;
	cout<<"1 for enqueue , 2 for dequeue , 3 for peek , 4 for printing:"<<endl;
     do{
     	cout<<"enter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1 : enqueue(); break;
		case 2 : dequeue(); break;
		case 3 : peek(); break;
		case 4 : print(); break;
		case 5 :  break;
	}
    }while(choice!=5);
}
