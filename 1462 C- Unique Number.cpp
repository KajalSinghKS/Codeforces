/* number sum
  9       9
  19      10
  29      11
  39      12
  ....
  89      17
  189     18
  289     19
  ...
  789     24
  1789    25
  2789    26
  ....
  6789    30
  16789   31
  ....
  56789   35
  so on..
  
  123456789 45
  
  for numbers above 45, there is no such number and output will be -1.
  */
  
  
#include<bits/stdc++.h>
using namespace std;

int main()
{      
    int t;
    cin>>t;
    
    while(t--)
    {
        int x;
        cin>>x;
        
        if(x>=1 && x<=9)
        {
            cout<<x<<endl;
            continue;
            
        }
        
        string ans = "9";
        int sum = 9;
        int firstDigit=9;;
        
        while(1)
        {
            if(x-sum < firstDigit)
            {
                ans = to_string(x-sum) + ans;
                break;
            }
            
            if(firstDigit-1 < 1)
            {
                cout<<"-1"<<endl;
                ans="";
                break;
            }
            
            ans = to_string(firstDigit -1) + ans;
            firstDigit = firstDigit-1;
            sum = sum + firstDigit;
            
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
