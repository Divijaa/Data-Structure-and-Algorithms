#include<iostream>
using namespace std;
bool compare(int a[],int i,int j);
void swap(int a[],int i,int j);
void selection_sort(int a[],int n);
void print(int a[], int n);
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection_sort(a,n);
    print(a,n);
}
bool compare(int a[],int i,int j)
{
    cout<<"Comparing"<<a[i]<<"and"<<a[j]<<endl;
    if(a[j]<a[i])
    return true;
    else
    return false;
}
void swap(int a[],int i, int j)
{
    cout<<"Swapping"<<a[i]<<"and"<<a[j]<<endl;
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void selection_sort(int a[],int n)
{
    int min=0;
    for(int i=0;i<n-1;i++)
    {
    	min=i;
        for(int j=i+1;j<n;j++)
        {
            if(compare(a,min,j))
            {
            min=j;    
            }
        }
        swap(a,min,i);
}
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
