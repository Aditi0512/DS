USING LOOP

------------
#include <iostream>
using namespace std;
 
int main()  
{  
int num,i;
int f = 1;    
 
cout << "Enter a number:";    
cin >> num;  
 
for (i=num; i>1; i--)   
f = f * i;  
cout<<"Factorial of " << num<< " is: "<<f<<endl;   
 
return 0;
}
==============================================================
USING RECURSION
--------------
#include <iostream>
using namespace std;
 
int main()  
{  
int x;
cout << "Enter a Number: ";
cin >> x;
int factorial(int);  
int fact=factorial(x);  
cout<<"Factorial of " << x << " is: "<<fact<<endl;  
return 0;  
}  
 
int factorial(int n)  
{  
if(n<0)  
return(-1);   
if(n==0)  
return(1);  
else  
{  
return(n*factorial(n-1)); 	 
}  
}
