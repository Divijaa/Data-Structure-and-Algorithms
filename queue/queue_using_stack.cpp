#include<iostream>
#include<stack>
using namespace std;
stack <int> s1;
stack <int> s2;
int ele;
enqueue()
{
	int ele;
	cin>>ele;
	s1.push(ele);	
}
dequeue()
{
	if(s1.empty()&&s2.empty())
	{
		cout<<"error";
	}
	else
	{
		if(s2.empty())
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		int topval=s2.top();
		s2.pop();
		cout<<topval;
	}
}
print()
{
	if(s1.empty()&&s2.empty())
	{
		cout<<"error";
	}
	else{
	
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
		int topval=s2.top();
		s2.pop();
		cout<<topval;
	}
        }
}
int main()
{
	int ch;

	do{
			cin>>ch;
	switch(ch)
    {
	case 1: enqueue(); break;
	case 2: dequeue(); break;
	case 3 : print(); break;
	case 4 : break;
    }
}while(ch!=4);
}
