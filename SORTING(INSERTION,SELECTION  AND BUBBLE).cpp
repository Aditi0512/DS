INSERTION SORT
-----------------------
#include<bits/stdc++.h>
using namespace std;
void insert_sort(int arr[],int n)
{int i,j,temp,comp=0,shift=0;
for(i=1;i<n;i++)
{
temp=arr[i];
j=i-1;
shift++;
while(j>=0 && temp<arr[j])
{arr[j+1]=arr[j];
j--;
comp++;
shift++;
}
arr[j+1]=temp;}
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
cout<<"Comaparison="<<comp<<" shifts ="<<shift<<endl;
cout<<endl;}
int main()
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
insert_sort(arr,n);

return 0;}
--------------------------------------------------------------------
  =====================================================================
 -----------------------------------------------------------------------
  SELECTION SORT
  ----------------------
 #include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{int i,j,min=0,comp=0,swaps=0;
for(i=0;i<n-1;i++)
{min=i;
for(j=i+1;j<n;j++)
{comp++;
if(arr[min]>arr[j])
{
min=j;
}}
swap(arr[i],arr[min]);
swaps++;}
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
cout<<"Comparisons="<<comp<<endl;
cout<<"Swaps="<<swaps<<endl;}

int main()

{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
selection_sort(arr,n);
return 0;}
-------------------------------------------------------
  =============================================================
 ------------------------------------------------------
 BUBBLE SORT
 ----------------
#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}


void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
	bubbleSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}
----------------------------------------
==============================================
----------------------------------------
 MODIFIED BUBBLE SORT
 --------------------
 #include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n)
{
	int i, j,flag=0;
	for (i = 0; i < n - 1; i++)

		{flag=0;
		for (j = 0; j < n - i - 1; j++)
			{if (arr[j] > arr[j + 1])
			{	swap(arr[j], arr[j + 1]);
			flag=1;
			}
			}
			if(flag==0)
			break;	
}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
	bubbleSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}
--------------------------------
