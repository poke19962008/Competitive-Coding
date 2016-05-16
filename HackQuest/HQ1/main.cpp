/*Author: SAYAN DAS*/

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int N, K;
        cin>>N;
        cin>>K;
        
        int x, counter = 0;
        while(N--){
            cin>>x;
            if(x<=0) counter++;
        }
        
        if(counter < K) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

