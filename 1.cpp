#include <iostream>  
using namespace std;  
int main()  
{  
int a[10], n, i;    
cin>>n;    
for(i=0; n>0; i++)    
{    
a[i]=n%3;    
n= n/3;  
}    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}  