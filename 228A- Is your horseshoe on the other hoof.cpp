#include<iostream>
#include<set>
using namespace std;
 
int main()
{   
        set<int>s;
        
        int count=0,i=4,s1;
 
        while(i--)
        {
            cin>>s1;
            if(s.find(s1) == s.end())
            {
                s.insert(s1);
                count++;
            }
            
        }
        
        cout<<4-count;    
        
        
        return 0;    
}
