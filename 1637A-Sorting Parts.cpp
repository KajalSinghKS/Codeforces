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
            
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            
            int len=1;
            string ans="NO";
            
            while(len<=n-1)
            {   
                int b[n];
                for(int i=0;i<n;i++)
                {
                    b[i] = a[i];
                }
                sort(b,b+len);
                sort(b+len,b+n);
                
                if(b[len-1]>b[len])
                {
                    ans="YES";
                    break;
                }
                       
                len++;
            }
            
            cout<<ans<<endl;
           
        }
        
      
        return 0;    
}
