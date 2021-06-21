#include<iostream>
using namespace std;
int  main ()
{
		int n;
	int a[n];
	cout<<"enter the number of elements you want:";
	cin>>n;
	cout<<"enter the elements:";
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"number of subarrays formed:";
	cout<<n*(n+1)/2<<endl;
	for(int i=0;i<n;i++)
	{
		int s=0;
		for(int j=i;j<n;j++)
		{
			s+=a[j];
			cout<<s<<" ";
		}
	}
}
