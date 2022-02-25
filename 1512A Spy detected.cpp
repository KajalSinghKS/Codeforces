#include<iostream>
using namespace std;
 
int main()
{      
        int t;
        cin>>t;
        
        while(t--)
        {
            int n;
            cin>>n;
            
            int a[n+1];
            for(int i=1;i<=n;i++)
            {
                cin>>a[i];
            }
            
            for(int i=1;i<=n;i++)
            {
                if(i==1)
                {
                    if(a[i]!=a[i+1] && a[i]!=a[i+2])
                    {
                        cout<<i<<endl;
                        break;
                    }
                    
                }
                else if(i > 1 && i < n)
                {
                    if(a[i]!=a[i-1] && a[i]!= a[i+1])
                    {
                        cout<<i<<endl;
                        break;
                    }
                }
                else cout<<n<<endl;
            }
        }
        
        return 0;     
}
