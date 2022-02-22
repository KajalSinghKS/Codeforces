#include<iostream>
using namespace std;
 
void print(int A[],int n,int j)
{
    for(int i=0;i<n;i++)
    {   
        if(i==j)
        {
            cout<<A[i+1]<<" "<<A[i]<<" ";
            i++;
        }
        else cout<<A[i]<<" ";
    }
        
    cout<<endl;
}
 
 
int main()
{       int t;
        cin>>t;
        
        while(t--)
        {
            int n;
            cin>>n;
            
            int A[n];
            int num=1;
            for(int i=n-1;i>=0;i--)
            {
                A[i]=num;
                num++;
            }
            
            int j=-1;
            for(int i=0;i<n;i++)
            {
                print(A,n,j);
                
                j++;
            }
        }
        
        return 0;    
}
