/*Author: SAYAN DAS*/

#define lli long long int

#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
    lli T;
    cin>>T;
    
    while(T--){
        lli n1, n2, m;
        lli ans = 0;
        
        cin>>n1;
        cin>>n2;
        cin>>m;
        
        lli max = 0;
        max = (m*(m+1))/2;
        
        if(n1>=max && n2>=max)  ans = n1+n2-2*max;
        else ans = (n1>n2)?(n1-n2):(n2-n1);
        
        cout<<ans<<endl;
    }

    return 0;
}

