#include<iostream>
using namespace std;
struct linkedlist{
	int data;
	struct linkedlist *link;
};
typedef struct linkedlist sl;
int main ()
{
	sl *head;
	head= new sl;
	head->data=50;
	head->link=NULL;
	cout<<head->data<<endl;
	
	sl *current;
	current=  new sl;
	current->data=60;
	current->link=NULL;
	head->link=current;
	cout<<current->data<<endl;

    current->data=70;
	current->link=NULL;
	head->link->link=current;
	cout<<current->data<<endl;
}
