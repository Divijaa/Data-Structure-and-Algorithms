#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    string x="abcdefghijklmnopqrstuvwxyz";
    cin>>a;
    int n=a.size();
     int h[26];
     for(int i=0;i<26;i++)
     {
     	h[i]=0;
	 }
    for(int j=0;j<n;j++)
    {
    	h[a[j]-97]+=1;
	}
	for(int i=0;i<26;i++)
	{
		if(h[i]>=1)
		{
			cout<<x[i];
			cout<<h[i];
		}
	}
	
}
