#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{   
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        
        int count=0;
        while(1)
        {
            if(a>b)
                b=a+b;
            else 
            {
                a= a+b;
            }
            count++;
            
            if(a>n || b>n)
            {
                cout<<count<<endl;
                break;
            }
           
        }
  
    }
    
    return 0;
    
}
