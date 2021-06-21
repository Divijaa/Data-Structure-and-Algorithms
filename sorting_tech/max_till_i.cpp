#include<iostream>
using namespace std;
int main ()
{
	cout<<"to find maximum till end"<<endl; 
	int n;
	int a[n];
	cout<<"enter the number of elements you want:";
	cin>>n;
	cout<<"enter the elements:";
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n;j++)
	{
		if(a[j]>a[j+1])
		cout<<a[j];
		else
		cout<<a[j+1];
	}
}
