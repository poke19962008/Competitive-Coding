/*Author: SAYAN DAS*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    long int n,k,q;
    cin>>n;
    cin>>k;
    cin>>q;
    vector<long int> v;
    for(long int i=0;i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    long int pointer = 0;
    if(k > n)
        k -= (k/n)*n;
    pointer -= k;
    pointer %= n;
    if (pointer < 0) 
        pointer += n;
    
    while(q--){
        int idx;
        cin>>idx;
        cout<<v[(idx + pointer + n ) % n]<<endl;
    }

    return 0;
}

