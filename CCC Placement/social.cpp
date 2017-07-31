#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#define vec vector<int>
using namespace std;

int arr[1000006], size[1000006];
long int ans = 0;

bool isEven(int n) { return !(n&1); }

void init(int n) {
  for(int i=0; i<n; i++) {
    arr[i] = i;
    size[i] = 1;
  }
}

int root(int a) {
  int i = a;
  while(arr[i] != i) {
    i = arr[arr[i]];
  }
  return i;
}

void union_(int a, int b){
  int rootA = root(a);
  int rootB = root(b);

  if(rootA == rootB) return;

  if(size[rootA] < size[rootB]) {
    arr[rootA] = rootB;

    int tmp = size[rootB];
    size[rootB] += size[rootA];

    // TODO: Modify This!!
    if(!isEven(tmp) && !isEven(size[rootA])) ans++;
    else ans--;
  }else {
    arr[rootB] = rootA;

    int tmp = size[rootA];
    size[rootA] += size[rootB];

    if(!isEven(tmp) && !isEven(size[rootB])) ans++;
    else ans--;
  }
}

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input01.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
  #endif

  int n;
  scanf("%d", &n);

  init(n);
  while(true) {
    char ch[3];
    int a, b;

    scanf("%s", ch);
    scanf("%d", &a);
    scanf("%d", &b);

    if(ch[0] == '-') break;

    switch(ch[0]) {
      case 'Q':
        // ans = 0;
        // for(int i=0;i<n; i++) if(!(size[i]&1)) ans++;
        printf("%ld\n", ans);
        break;

      case 'C':
        union_(a, b);
        break;
    }
  }


  return 0;
}
