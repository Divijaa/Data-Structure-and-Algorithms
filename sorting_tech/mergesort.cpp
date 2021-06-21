#include<iostream>
using namespace std;
int n;
int a[10];
void merge(int a[],int lb,int mid, int ub)
{
	int i=lb;
	int j= mid+1;
	int k=lb;
	int b[k];
	while(i <= mid && j <= ub)
	{
		if (a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
	}
	for(int m=0;m<n;m++)
	{
		cout<<a[m]<<endl;
	}
	
}
void mergesort(int a[],int lb, int ub)
{
	int mid;
	
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		
	mergesort(a,lb,mid);
	mergesort(a,mid+1,ub);
	merge(a,lb,mid,ub);
    }
}
int main ()
{
	
	cout<<"enter the number of elements you want:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int lb=0;
	int ub=(sizeof(a[n]))-1;
	mergesort(a,lb,ub);
}
