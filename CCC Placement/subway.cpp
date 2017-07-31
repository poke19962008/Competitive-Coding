#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
      freopen("test.txt", "r", stdin);
    #endif
    long long int n, m;
    cin>>n>>m;

    while(n--) {
        if(m==1) m=3;
        else m--;
    }
    cout<<m;
    return 0;
}
