#include<bits/stdc++.h>
using namespace std;
 
int main()
{   
        int n;
        cin>>n;
        
        string s="";
        
        char ch;
        while(n!=0)
        {   
            if(ch=='a')
                ch='b';
            else ch='a';
            
            s+=ch;
            n--;
            
            if(n!=0)
            {
                s+=ch;
                n--;
            }
        }
        
        cout<<s;
        
        return 0;    
}
