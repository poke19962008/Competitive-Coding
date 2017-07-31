#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdio>
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
      freopen("test.txt", "r", stdin);
    #endif

    char str[10000], val[1000], key[10000];
    map<string, string> mp;

    while(gets(str) && strlen(str)) {
      sscanf(str, "%s %s", val, key);
      mp[key] = val;

      // cout<<key<<" "<<val<<endl;
    }

    string _a;
    cin>>_a;
    string f;
    while(cin>>f) {
      map<string, string> :: iterator it = mp.find(f);

      // cout<<f<<endl;
      if(it == mp.end()) cout<<"eh"<<endl;
      else cout<<it->second<<endl;
    }
    return 0;
}
