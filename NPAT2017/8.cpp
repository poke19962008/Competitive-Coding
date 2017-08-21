#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>

#define EPS 1e-9
#define INF 1e15+9
#define MOD 1000000007
#define MAXN 1000006

#define ioS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<"="<<x<<"\n";
#define debug_(x,y) cout<<#x<<"="<<x<<" and "<<#y<<"="<<y<<"\n";

int max(int a, int b) { return ((a>b)?a:b); }
int min(int a, int b) { return ((a<b)?a:b); }

#define pb push_back
#define mp make_pair

#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)

typedef unsigned long long int ul;
typedef long long int ll;
typedef long int l;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


bool cmp(pii a, pii b) {
  return a.second < b.second;
}
void mostFreq3(int *arr, int n, int b[3]) {
  pii v[3];
  v[0].first = -1; v[0].second = -1;
  v[1].first = -1; v[1].second = -1;
  v[2].first = -1; v[2].second = -1;
  sort(arr, arr+n);
  REP(i, n) {
    int j=i+1, freq = 1;
    while(j<n && arr[j] == arr[i]) { j++; freq++; }

    if(v[0].second < freq) {
      v[0].second = freq;
      v[0].first = arr[i];
    }
    sort(v, v+3, cmp);
    i = j-1;
  }

  b[0] = v[2].first;
  b[1] = v[1].first;
  b[2] = v[0].first; 
}

int main()
{
	int n;
	int a[100];
	int b[3];
	int i=0;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}

	mostFreq3(a,n,b);
        for(i=0; i<3; i++)
            cout << b[i] << " ";

	return 0;
}
