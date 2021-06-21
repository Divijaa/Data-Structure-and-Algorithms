#include<iostream>
#include<stack>
#include<math.h>
using namespace std ;
int infix_to_prefix(string s)
{
	stack <char> st;
	
	for(int i=0; i<s.lenght();i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			cout<<(s[i]-'0');
		}
		if(s[i]=='(')
		{
			st.push(s[i]);
		}
		if(s[i]==')')
		{
			do{
				st.pop();
				cout<<st.pop();
			}while(s[i]!='(');
		}
		else
		{
			
		}
	}
	
}
