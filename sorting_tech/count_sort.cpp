#include<iostream>
using namespace std;
void count_sort(int a[],int k,int n)
{
	int count[k]={0};
	int b[n];
	for(int i=0;i<n;i++)        //the number of times an element is repeated
	{
		count[a[i]]++;
	}
	for(int i =0;i<=k;i++)         // this will give the actual position of all the numbers
	{
		count[i]=count[i]+count[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		count[a[i]]=count[a[i]]-1;
		b[count[a[i]]]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[max]<a[i])
		{
			max=i;
		}
	}
	
	int k=a[max];
	cout<<"max"<<k<<endl;
	count_sort(a,k,n);
}
