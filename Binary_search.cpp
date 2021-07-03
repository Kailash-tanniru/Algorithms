#include<iostream>

using namespace std;

//binary search algorithm

void check_order(int n, int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
          if(arr[j]>arr[j+1])
          {
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
        }
    }
    
}

void display_after_sort(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}

void input(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    check_order(n,arr);
}

void binary_search(int n,int arr[],int k)
{
    int first=0;
    int last = n-1;
    int flag=0;
    while(first<=last)
    {
        int mid=(first+last)/2;
        if(arr[mid]==k)
        {
            cout<<"Element is found at position  "<<mid+1;
            flag=1;
            break;
        }
        else if(arr[mid]>k)
        {
            last =mid-1;
        }
        else if(arr[mid]<k)
        {
            first = mid+1;
        }
    }
    if(flag==0)
    {
        cout<<"Element is not found in the array!";
    }

}


int main()
{
    int n,k;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    input(n,arr);
    cout<<"After sorting : ";
    display_after_sort(n,arr);
    cout<<"\nEnter element to search: ";
    cin>>k;
    binary_search(n,arr,k);
    return 0;
 
    
}