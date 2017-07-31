#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long x, ans=0, i=0;
    cin>>x;

    while(x) {
      int num = x%10;

      if(num == 4) {
        if(ans&(1<<i)) { ans ^= (1<<i); ans ^= (1<<(i+1));  }
        else ans ^= (1<<i);
      }else ans ^= (1<<(i+1));

      i++;
      x /= 10;
    }

    cout<<ans;

    return 0;
}
