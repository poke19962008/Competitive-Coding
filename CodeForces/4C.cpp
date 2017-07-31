#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
  int n;
  map<string, bool> mp;
  cin>>n;

  while(n--) {
    string str;
    cin>>str;

    map<string, bool> :: iterator it = mp.find(str);

    if(it == mp.end()) {
      cout<<"OK\n";
      mp[str] = true;
    }else {
      int i = 1;
      while(true) {
        string tmp = str+to_string(i);
        // cout<<tmp<<endl;
        it = mp.find(tmp);
        if(it == mp.end()){  mp[tmp] = true; cout<<tmp<<endl; break;}
        i++;
      }
    }
  }

  return 0;
}
