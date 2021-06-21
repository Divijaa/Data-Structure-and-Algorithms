#include<iostream>
using namespace std;
int n;
int max(float a[10],int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[max])
		{
			max=i;
		}
	}
	a[max]=0;
	return max;
}
int main()
{
	cout<<"how many objects you want?";
	cin>>n;
	int m;
	cout<<"what is the weight of knapsack?";
	cin>>m;
	
	float pro[n];
	float wei[n];
	for(int i=0;i<n;i++)
	{
		cout<<"profit:";
		cin>>pro[i];
		cout<<"weight:";
		cin>>wei[i];
	}
	float x[n];
	float z[n];
	for(int i=0;i<n;i++)
	{
		x[i]=pro[i]/wei[i];
		z[i]=x[i];
		cout<<x[i]<<" ";
	}
    int rem = m;
    float tp=0;
	while(rem>0)
	{
		
		int y=max(x,n);
		if(wei[y]<rem)
		{
		rem=rem-wei[y];	
		tp=tp+(wei[y]*z[y]);
	
	    }
	    else
	    {
	    	wei[y]=rem;
	    	rem=rem-wei[y];
	    	tp=tp+wei[y]*z[y];
	    	
		}
	}
	cout<<"max profit is:"<<tp;

	
}
