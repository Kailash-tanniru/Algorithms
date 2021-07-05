//Bubble sort algorithm

/*
Worst complexity :O(n^2)
*/

#include<iostream>

using namespace std;

#define array ar
#define fast  \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);\
    cout.tie(0);

const int mxn = 2e5;
int n,k,ar[mxn];

void bubble_sort()
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp = ar[j+1];
                ar[j+1] = ar[j];
                ar[j] = temp;
            }
        }
    }
    
}
void display()
{
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main()
{
    fast;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    bubble_sort();
    display();
    return 0;

}