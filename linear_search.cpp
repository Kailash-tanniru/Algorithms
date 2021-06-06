#include<iostream>

using namespace std;



void linear_search(int n,int arr[],int k)
{
int i;
for(i=0;i<n;i++)
{
    if(arr[i]==k)
    {
        cout<<"Element found at Position "<<i+1;
        break;
    }
   
}
if(i>=n)
{
    cout<<"Out of list";
}
}

int main()
{   
    int n,k;
    cout<<"Enter Number :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number to be searched:";
    cin>>k;
    linear_search(n,arr,k);
    return 0;
}