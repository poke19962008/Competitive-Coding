#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void f(string tree, int start, int end) {
    if(start>end) return;
    if(end-start == 2) {
        cout<<tree[start];
        cout<<tree[end];
        cout<<tree[start+1];
    }else {
        f(tree, start, end/2-1);
        cout<<tree[end];
        f(tree.substr(end/2, end/2), 0, end/2-1);
    }
}


int main() {
  /*#ifndef ONLINE_JUDGE
    freopen("test.txt", "r", stdin);
  #endif*/
  string str;
  cin>>str;

  f(str, 0, str.size()-1);

  return 0;
}