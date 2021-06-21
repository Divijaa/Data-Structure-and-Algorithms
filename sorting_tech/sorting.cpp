#include<iostream>
using namespace std;
int n, mid;
void swap(int a[], int &i, int &j)
{
	int temp =a[i];
	a[i]=a[j];
	a[j]=temp;
}
void selectionsort(int a[],int n)
{
	int min=0;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				swap(a,min,i);
			}
		}
	}
	cout<<"sorting by selection:";
	for(int i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
	cout<<endl;
}
void insertion(int a[] , int n)
{
	for(int i=0;i<n;i++)
	{
		int temp=a[i];
		int j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	cout<<"sorting by insertion:";
	for(int i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
	cout<<endl;
}
void bubble_sort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j+1]<a[j])
			{
				//swap(a,j+1,j);
			}
		}
	}
	cout<<"sorting by bubble:";
	for(int i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
	cout<<endl;
}
//QUICK SORT
int partition(int a[],int pivot,int lo,int hi)
{
	int i=lo;
	int j=lo;
	while(i<=hi)
	{
		if(a[i]>pivot)
		{
			i++;
		}
		else
		{
			swap(a,i,j);
			i++;
			j++;
		}
	}
	return (j-1);           // this returns the location of pivot;
	
}
void quick_sort(int a[],int lo,int hi)
{

	if(lo>hi)
	{
		return;
	}
	int pivot=a[hi];
	int pi=partition(a,pivot,lo,hi);
	cout<<pi;
	quick_sort(a,lo,pi-1);
	quick_sort(a,pi+1,hi);
	
}
print(int a[],int n)
{
	cout<<"sorting by quick:"<<endl;
	for(int i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main ()
{
	int a[n];
	cout<<"enter the number of elements you want:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int lo=0;
	int hi=n-1;
	quick_sort(a,lo,hi);
	print(a,n);
}
