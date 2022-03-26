

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b;
    cin>>a>>b;
    
    int rem=0,ans=a,q=a;
    
    while(q/b!=0)
    {    
        ans+=q/b;
        rem = q%b;
        q = (q/b) + rem;
       
    }
        
    cout<<ans;
    
    return 0;
}
