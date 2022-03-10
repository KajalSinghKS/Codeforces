//             1/5  2/5  3/5  4/5  5/5  6/5  7/5  8/5  9/5  10/5  11/5  12/5  13/5  14/5  15/5
// remainders  1    2     3   4    0     1    2    3   4    0     1     2    3     4      0
// quotients    0    0    0   0    1     1    1    1   1    2     2     2    2     2      3
// sum= rem+q  1     2    3   4    1    2     3    4   5    2      3    4    5     6      3
                              ^                        ^                           ^

#include<bits/stdc++.h>
using namespace std;

int main()
{      
    int t;
    cin>>t;
    
    while(t--)
    {
        int l,r,a;
        cin>>l>>r>>a;
        
        int max;
        if(l/a == r/a || r%a == a-1)
            max = (r/a )+ (r%a);
        else
            max = (a-1) + ((r/a)-1);
            
        cout<<max<<endl;
    }
    
    return 0;
}
