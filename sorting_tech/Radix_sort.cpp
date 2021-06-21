#include<iostream>
using namespace std;

void count_sort(int a[],int pos,int n);
void radix_sort(int a[],int k, int n);
void print(int arr[], int n);

int main()
{
	int n;
	int a[n];
	cin>>n;
	
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
	//cout<<"max"<<k<<endl;
	radix_sort(a,k,n);
	print(a,n);
}

void count_sort(int a[],int pos,int n)
{
	int count[10]={0};
	int b[n];
	for(int i=0;i<n;i++)        //the number of times an element is repeated
	{
		count[(a[i]/10)%10]++;
	}
	for(int i =0;i<10;i++)         // this will give the actual position of all the numbers
	{
		count[i]=count[i]+count[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		count[(a[i]/10)%10]=count[(a[i]/10)%10]-1;
		b[count[(a[i]/10)%10]]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	
	//cout<<"finifh";
}
void radix_sort(int a[],int max, int n)
{
	for (int pos=1;max/pos>0;pos*=10)
	{
		count_sort(a,pos,n);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
