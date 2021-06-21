#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout<<"enter the number of elements you want to add:";
	cin>>n;
	cout<<"enter the elements to be arranged by selection sort:";
	int a[n];
	for (int x=0;x<n;x++)
	{
		cin>>a[x];
	}
	int temp;
	int i;
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for (int k=0;k<n;k++)
	{
		cout<<a[k]<<" ";
	}
}
