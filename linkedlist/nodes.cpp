#include<iostream>
using namespace std;
struct link{
	int data;
	struct link *next;
};
void print_list(struct link *head)
{
	
		if(head==NULL)
		{
			cout<<"the list is empty";
		}
		struct link*current=NULL;
    	current = head;
	while(current!=NULL)
	{
		cout<<current->data;
		current=current->next;
	}
}
  void count_no_of_nodes(struct link *head)
	{
		if(head==NULL)
		{
			cout<<"the list is empty";
		}
		struct link *current=NULL;
		current = head;
		int count=0;
		while(current!=NULL)
		{
			count++;
			current=current->next;	
		}
		cout<<count;
   }
typedef struct link l;
int main()
{
	l *head;
	head= new l;
	head->data=30;
	head->next=NULL;
	cout<<head->data<<endl;
	
	l *current;
	current = new l;
	current->data=40;
	current->next=NULL;
	head->next=current;
	cout<<current->data<<endl;
	
	current = new l;
	current->data=50;
	current->next;
	head->next->next=current;
	cout<<current->data<<endl;
	print_list(head);
	count_no_of_nodes(head);

}
