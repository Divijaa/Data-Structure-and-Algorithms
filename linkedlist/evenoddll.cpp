#include<iostream>
using namespace std;
struct ll{
	int item;
	struct ll *next;
};
typedef struct ll node;
node * head=NULL;
int a[100];
int n=0;
void create()
{
	if(head==NULL)
	{
        head = new node;  
        cout<<"Enter the element ";
        cin>>head->item;
        head->next=NULL;              
     }   
	else  //inert at the end of the list
     {
        node *p=head,*q; 
        while(p->next!=NULL)
        {
		p=p->next;
		}           //take the pointer to the last node
        q = new node;  //create the new node
        cout<<"Enter the element ";
        cin>>q->item;
        q->next=NULL;
        
        p->next=q;
     }
                                           
}
void display()
{
	node *p=head;
	while(p!=NULL)
	{
		if((p->item)%2==0)
		{
		 cout<<p->item<<" ";
		}
	    else
	    {
	     	a[n]=p->item;
	     	n++;
		}
		  p=p->next;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main ()
{
int choice;
	do{
		cout<<"enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1 :
				create();
				break;
				
		    case 2:
				display();
				break;
			case 3 :
				break;
		}
	}while(choice!=3);
}

