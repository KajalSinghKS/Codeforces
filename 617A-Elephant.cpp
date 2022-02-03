/* 
x           min. steps
1  to 5   - 1 step
6  to 10  - 2 steps
11 to 15  - 3 steps
16 to 20  - 4 steps  and so on.
*/


#include<iostream>
using namespace std;
 
int main()
{
    int x,steps;
    cin>>x;
    
    if(x%5==0)
        steps=x/5;
    else steps=x/5+1;
    
    cout<<steps;
    
    return 0;
}
