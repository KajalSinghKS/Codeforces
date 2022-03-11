#include<bits/stdc++.h>
using namespace std;
 
int main()
{      
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        int firstDigit=s[0]-48;
        if(s.length()==1)
            cout<<1+((firstDigit-1)*10)<<endl;
        else if(s.length()==2)
            cout<<3+((firstDigit-1)*10)<<endl;
        else if(s.length()==3)
            cout<<6+((firstDigit-1)*10)<<endl;
        else if(s.length()==4)
            cout<<10+((firstDigit-1)*10)<<endl;
    }
    
    return 0;
}
