QUICK SORT
-----------------
#include<iostream>
using namespace std;
int swapc=0;
void swap(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
    swapc++;
}
int partition(int arr[],int p, int r)
{
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}
void quicksort(int arr[],int p,int r)
{int cp=0;
int n=r;
    if(p<r)
    {
        int q=partition(arr,p,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);

    }

   }
int main()
{int sw;
    int t;
    cin>>t;
    int n;
    while(t--){
    cout<<"enter n:";  
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";  
    for(int i=0;i<n;i++)cin>>arr[i];
    quicksort(arr,0,n-1);
     for(int i=0;i<n;i++)cout<<arr[i]<<" ";
cout<<"swaps:"<<swapc;
    }

}
--------------------------------------------------------------
  ======================================================================
---------------------------------------------------------------
 RANDOMISED QUICK SORT
 ---------------------------
 #include<iostream>
using namespace std;
int swapc=0;
void swap(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
    swapc++;
}
int partition(int arr[],int p, int r)
{
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}
int partition_r(int arr[], int low, int high)
{
   
    int random = low + rand() % (high - low);
  
    
    swap(arr[random], arr[high]);
  
    return partition(arr, low, high);
}
void quicksort(int arr[],int p,int r)
{int cp=0;
int n=r;
    if(p<r)
    {
        int q=partition_r(arr,p,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);

    }

   }
int main()
{int sw;
    int t;
    cin>>t;
    int n;
    while(t--){
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++)cin>>arr[i];
    quicksort(arr,0,n-1);
     for(int i=0;i<n;i++)cout<<arr[i]<<" ";
cout<<"swaps:"<<swapc;
    }

}
