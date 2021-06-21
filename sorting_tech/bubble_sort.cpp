#include<iostream>
using namespace std;

  // used for swapping ith and jth elements of array
   void swap(int arr[], int i, int j) 
   {
    cout<<"Swapping "<<arr[i]<<" and "<<arr[j]<<endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  // return true if ith element is smaller than jth element
  bool isSmaller(int arr[], int i, int j)
  {
    cout<<"Comparing "<<arr[i] <<" and "<<arr[j]<<endl;
    if (arr[i] < arr[j]) {
      return true;
    } else {
      return false;
    }
  }
  void bubble_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(isSmaller(a,j+1,j))
            swap(a,j+1,j);
        }
    }
}
 //for printing
 print(int arr[],int n)
 {
    for (int i = 0; i < n; i++) {
      cout<<arr[i];
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
      bubble_sort(a,n);
      print(a,n);
  }
