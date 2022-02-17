#include<bits/stdc++.h>
using namespace std;
 
int main()
{   
        int t;
        cin>>t;
        
        while(t--)
        {
            int n,m,r,c;
            cin>>n>>m>>r>>c;
          
            char a[n][m];
       
            int ans=-1;
            
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                   cin>>a[i][j];
                }
            }
            
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                   
                    if(a[i][j]=='B')
                    {
                        if(i==r-1 && j==c-1)
                        {
                            ans=0;
                            break;
                        }
                        
                        else if(i==r-1 || j==c-1)
                        {
                            ans=1;
                            
                        }
                        
                        else if(ans!=1) 
                            ans=2;
                    }
                }
                
                if(ans==0)
                    break;
               
            }
       
           cout<<ans<<endl;
            
        }
        return 0;    
}
