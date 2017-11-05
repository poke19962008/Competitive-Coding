#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
using namespace std;

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

// int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}

int main() {
	ioS;

	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;

		int A[N], B[N];
		for (int i = 0; i < N; i++) cin >> A[i];

    set <int> pos;
		for (int i = 0; i < N; i++) {
			cin >> B[i];
      pos.insert(A[i]%B[i]);
		}

		long long sol = 100000000000000000;
    set<int>::iterator it;
		for (it = pos.begin(); it != pos.end(); it++) {
      int i = *it;
			long long s = 0;
			for (int j = 0; j < N; j++) {
				if (A[j] < i) {
					s += i - A[j];
				}
				else if (A[j] > i) {
					s += B[j] - A[j] + i;
				}

				if (sol <= s)
					break;
			}

			if (s < sol)
				sol = s;
		}

		cout << sol << "\n";
	}
}
