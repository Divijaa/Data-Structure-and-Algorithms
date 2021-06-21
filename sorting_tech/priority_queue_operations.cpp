#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int x[] = { 12, 13, 5, 6, 7 };
Maxheapify(int a[],int n,int i)
{
	//starting array from 0 ,1 se krne ki glti na kre :(
	int largest =i;
	int l=2*i+1; //left child
	int r=2*i+2; //right child
	if(l<n && a[l]>a[largest])
	{
		largest=l;
	}
	if(r<n && a[r]>a[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(a[i],a[largest]);
		Maxheapify(a,n,largest);
	}
}
heap_maxbuild(int a[],int n)                               //to build maximum heap
{
	for(int i=n/2-1;i>=0;i--)
	{
		Maxheapify(a,n,i);
	}
}
heap_max(int a[],int n)                                  // to find maximum in heap
{
	heap_maxbuild(a,n);
	return a[0];
}
heap_extract_max(int a[],int n)                         //to delete the maximum element
{
   if(n<1)
   cout<<"underflow";
   else{
   int max = heap_max(a,n);
   a[n-1]=a[0];
   Maxheapify(a,n-2,0);
   cout<<"extracted element is :"<<max;
   }
   
}

heap_increase_key(int a[],int i,int key , int n)           //for increasing some value of the node
{
	if(key<x[i])
	{
		cout<<"invalid value";
	}
	else
	{
		x[i]=key;
		for(int j=0;j<n;j++)
		{
			a[j]=x[j];
		}
		
		heap_maxbuild(a,n);
		cout<<"the increased value is:"<<a[i];
	}
	
}
max_heap_insert(int a[],int key, int n)                   //for inserting new value
{
	n=n+1;
	x[n-1]=-1000;
	a[n-1]=x[n-1];
	heap_increase_key(a,n-1,key,n) ;
	cout<<"the inserted key is:"<<a[n-1];
	
}
heap_delete(int a[],int n)
{
	for(int i=n-1;i>0;i--)
	{
		swap(a[0],a[i]);
		Maxheapify(a,i,0); //because we are deleting toh heap kamm bhi hona chaiye
	}
}

heapsort(int a[],int n)
{
	//for building max heap
	heap_maxbuild(a,n);       
	//for deleting
	heap_delete(a,n);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
	
	int arr[] = { 12, 13, 5, 6, 7 };

    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"1 for building heap,2 for finding maximum element ,3 for deleting the maximum element,4 for icreasing hte value of key,5 for sorting"<<endl;
    int ch;
    while(ch!=7)
    {
    	cout<<endl<<"enter your choice:";
    	cin>>ch;
    	switch(ch)
		{
			    case 1:
				heap_maxbuild(arr,n);
				break;
				case 2:
				cout<<"the maximum element is :"<<heap_max(arr,n)<<endl;
				break;
				case 3:
				heap_extract_max(arr,n);
				break;
				case 4:
					int key;
					cout<<"enter the key:";
					cin>>key;
					int i;
					cout<<endl<<"enter the place:";
					cin>>i;
				heap_increase_key(arr,i,key,n); 
				break;
				case 5:
					heapsort(arr,n);
					printArray(arr, n);
					break;
				case 6:
					int key1;
					cin>>key1;
					max_heap_insert(arr,key1,n);
					
				
    		
		}
		
	}
}

