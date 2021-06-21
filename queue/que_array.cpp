#include<iostream>
using namespace std;
int f=-1;
int r=-1;
int n=5;
int a[n];
void enqueue()
{
        r++;
        if(r<n)
        {
            cout<<"overflow";
        }
        else
        {
            if(f==-1)
            {
                f=0;
            }
            cin>>a[r];
        }
}
void dequeue()
{
    if(f==-1||r>n)
    {
        cout<<"overflow";
    }
}
int main()
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