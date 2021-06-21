#include<iostream>
using namespace std;
int n;
#define n 3
int a[n];
int top =-1;
isempty()
{
	if(top==-1)
	{
		cout<<"the stack is empty"<<endl;
	}
}
isfull()
{
	if(top==n-1)
	{
		cout<<"the stack is full"<<endl;
	}
}
push() // to insert an element
{
	if(top==n-1)
	{
	    isfull(); //to check overflow
	}
	else
	{
		top++;
		cout<<"enter the element";
			cin>>a[top];
	}	
}
pop() //to delete an element
{
	if(top==-1)
	{
		isempty(); //to check underlfow
	}
	else
	{
		cout<<"the deleted element is:"<<a[top]<<endl;
		top--;
	}
}
peek() // to print topmost element
{
	cout<<"the toppmost element in the stack is:"<<a[top]<<endl;
}
display()
{
	if(top==-1)
	{
		isempty();
	}
	else
    {
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
    }
}
	
int main()
{
	cout<<"1 for inserting, 2 for deleting , 3 for topmost , 4 for printing"<<endl;
	int ch;
	do{
		cout<<"enter your choice:";
		cin>>ch;
	switch(ch)
	  {
		case 1: push(); break;
		case 2: pop(); break;
		case 3: peek(); break;
		case 4: display(); break;
		case 5: break;
	  }
    }while(ch!=5);
}
