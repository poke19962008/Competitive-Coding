#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
  int index, count;
};

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
int cumFac[100005][26];
vector<pair<node, node>> primFac;

void genPrimeFac() {
  for(int i=2; i<=100; i++) {
    vector<node> facts;
    int num = i;
    for(int j=0, factno=0; j<25; j++){

      int count = 0;
      while(num%primes[j] == 0){ count++; num /= primes[j]; }
      if(count)

    }
  }
}


int main() {
    int n, arr[100005];
    cin>>n;
    for(int i=0;i<n; i++) {
      cin>>arr[i];

    }



    return 0;
}
