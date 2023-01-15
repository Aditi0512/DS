USING DP
---------
#include<bits/stdc++.h>

      using namespace std;
 
  int main()
 {
    int n;
      cout<<"enter the number:";
           cin>>n;
       
       int dp[n+1];
       
      
       dp[1]=0; 
       
       dp[2]=1; 
       cout<<dp[1]<<" "<<dp[2]<<" ";
       for(int  i=3;i<=n;i++)
          {  dp[i]=dp[i-1]+dp[i-2];
            
            cout<<dp[i]<<" ";}
 }
========================================
 
WITHOUT RECURSION
-------------------
#include <iostream>  
using namespace std;  
int main() {  
  int n1=0,n2=1,n3,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<n1<<" "<<n2<<" ";    
 for(i=2;i<number;++i)    
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  
   }  
============================================
 
 WITH RECURSION
 ------------------------
 #include <iostream>
using namespace std;

int fibonacci (int num)
{
    if (num <= 1)
    return num;
    return fibonacci(num-1) + fibonacci (num-2);
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>> num;
    for (int a =0; a < num; a++)
    {
        cout<<fibonacci(a)<<" ";
    }
    return 0;
}
