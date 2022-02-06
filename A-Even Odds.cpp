#include<iostream>
using namespace std;
 
int main()
{
     long long int n,k,lastOdd,ans;
    
     cin>>n>>k;
    
     if(n%2==0)
          lastOdd=n/2;
     else lastOdd= (n/2)+1;
         
     if(k<=lastOdd)
     {
          ans= k + (k-1);
     }
     else if(k> lastOdd)
     {
          ans= 2* (k-lastOdd);
     }
   
     cout<<ans;
    
     return 0;
}
