#include<iostream>
using namespace std;
 
void reverse(int p[], int l, int r)
{
    while(l<r)
    {
        int temp= p[l];
        p[l]=p[r];
        p[r]=temp;
        
        l++;
        r--;
    }
}
 
 
int main()
{   
        int t;
        cin>>t;
        
        while(t--)
        {
            int n;
            cin>>n;
            
            int p[n];
            
            for(int i=0;i<n;i++)
            {
                cin>>p[i];
            }
            
            int flag=-1,l,r;
            for(int i=0;i<n-1;i++)
            {   
                int min = i;
                
                for(int j=i+1;j<n;j++)
                {
                    if(p[j]< p[min])
                    {   
                        flag=1;
                        min=j;
                    }
                        
                }
            
                if(flag==1) //1 pass of insertion sort happened. 
                {
                    l=i;
                    r=min;
                    
                    reverse(p,l,r); //instead of just swapping p[l] and p[r] like in insertion sort, reverse the subarray.
            
                    break;
                }
                    
            }
            
            
            for(int i=0;i<n;i++)
                cout<<p[i]<<" ";
                
            cout<<endl;
        }
        
        return 0;    
}
