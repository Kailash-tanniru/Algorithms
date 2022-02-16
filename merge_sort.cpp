// Merge sort Algorithm

// Merge sort uses divide and conqueor Approach

#include<iostream>

using namespace std;

//To merge the Array 
void merge(int a[],int l,int m,int r){
    int x= m-l+1;
    int y = r-m;
    int ta[x],tb[y];
    for(int i=0;i<x;i++){
        ta[i] = a[l+i];
    }
    for(int j=0;j<y;j++){
        tb[j] = a[j+m+1];
    }
    int i=0,j=0,z=l;
    while(i<x&&j<y){
        if(ta[i]>=tb[j]){
            a[z] = tb[j];
            
            j++;
        }
        else{
            a[z] = ta[i];
            i++;
        }
        z++;
    }
    while(i<x){
        a[z] = ta[i];
        i++;
        z++;
    }
    while(j<y){
        a[z] = tb[j];
        j++;
        z++;
    }

}
//Divide it Recursively

void merge_sort(int a[],int l,int r){
    
    if(l<r){
        int m = l+(r-l)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        merge(a,l,m,r);
    }

}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[100];
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Before Sorting : "<<endl;
    display(a,n);
    cout<<"After sorting: "<<"\n";
    merge_sort(a,l,r);
    display(a,n);
}