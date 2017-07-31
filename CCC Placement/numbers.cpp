#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  #ifndef ONLINE_JUDGE
      freopen("input01.txt", "r", stdin);
      // freopen("out.txt", "w", stdout);
    #endif

    string str;
    cin>>str;

    for(int i=0, count=0; i<str.size(); i++) {
        if(str[i] == '1') count++;
        else if(str[i] == '0'){ cout<<count; count=0; }
    }
    cout<<count;
    return 0;
}
