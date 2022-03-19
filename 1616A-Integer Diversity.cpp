#include<bits/stdc++.h>
using namespace std;
 
int main()
{   
    int t;
    cin>>t;
    
    while(t--)
    {
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
            a[i]= -a[i];
    }
    
    
    sort(a,a+n);
 
    int temp=0,count=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1] || a[i]==-(a[i-1]))
          continue;
        else
        {
            if(i-temp==1 || a[temp]==0)
                count++;
            else count=count+2;
            
            temp=i;
        }
    }
   
    if(temp==n-1 || a[temp]==0)
        count++;
 
    else
        count=count+2;
        
    cout<<count<<endl;
    }
     
    return 0;
    
}
