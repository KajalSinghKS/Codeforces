#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    string ans="";
    
    for(int i=0;i<n;i++)
    {   
        
     if(i%2==0)
     {
         if(i==n-1)
            ans+="I hate it ";
         
         else ans+="I hate that ";
     }
        
     else
     {
         if(i==n-1)
         ans+="I love it ";
         
         else ans+="I love that ";
        
     }
        
    }
    
    cout<<ans;
    
    return 0;
}
