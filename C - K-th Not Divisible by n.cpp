#include<iostream>
using namespace std;

int main()
{   
    int t;
    long long int n,k;
    
    cin>>t;
    
//     while(t--)     //binary search method gives TLE
//     {  
//        int left=1,right=INT_MAX;
//        cin>>n>>k;
       
//        while(left<=right)
//        {
//             int mid = (left+right)/2;
//             int q = mid/n;
            
//             if(mid%n==0)
//             {
//                 if((n-1)*q >= k)
//                    right= mid-1;
//                 else left=mid+1;
//             }
            
//             else
//             {
//                 if(mid-q==k)
//                 {
//                    cout<<mid<<endl;
//                    break;
//                 }
                
//                 if(mid-q>k)
//                    right=mid-1;
//                 else left=mid+1;
//             }
//        }
//     }
    
       while(t--)
       {     
             long long int ans;
             cin>> n>>k;
             if((k*n) % (n-1) ==0)
             { 
                  ans=  ( (k*n) / (n-1) ) - 1 ;
                  cout<<ans<<endl;
             }
             else 
             {
                  ans= (k*n) / (n-1);
                  cout<<ans<<endl;
             }
                 
       }
       return 0;    
}
