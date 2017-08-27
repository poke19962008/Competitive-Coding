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

#define debug(x) cout<<#x<<"="<<x<<"\n";
#define debug_(x,y) cout<<#x<<"="<<x<<" and "<<#y<<"="<<y<<"--->";

#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)

typedef long long int ll;
using namespace std;

struct NodeDesc {
    pair<int, int> coord;
    char dir;
    const bool operator <(const NodeDesc& o) const {return true;}
};
typedef pair <int, NodeDesc > node;
priority_queue<node> pq;
node cur;
int row,col;
char grid[1005][1005];
pair<int,int> v,h;
set<pair <int,int> > open;

bool func(int x, int y, char dir) {
    NodeDesc nextNode;
    nextNode.coord = make_pair(x, y);
    nextNode.dir = dir;
    int turns = - cur.first;
    if(cur.second.dir != nextNode.dir && cur.second.dir != '-') {
            turns++;
    }
    if(nextNode.coord == h) {
        cout<<turns;
        return true;
    }
    pq.push(make_pair(-turns, nextNode));
    open.insert(nextNode.coord);
    return false;
}

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif
    cin >> row >> col;
    row += 2;col += 2;
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < col;j++)
        {
            if(i == 0 || j == 0 || j == col-1 || i == row-1) {
                grid[i][j] = '*';
                continue;
            }
            cin>>grid[i][j];
            if(grid[i][j] == 'V')
            {
              v.first = i;v.second = j;
              grid[i][j] = '.';
            }
            else if(grid[i][j] == 'H')
            {
                h.first = i;h.second = j;
                grid[i][j] = '.';
            }
        }
      }
    // REP(i, row) {
    //   REP(j, col) cout<<grid[i][j];
    //   cout<<endl;
    // }
    // search
    NodeDesc n; n.coord = v; n.dir = '-';
    node start = make_pair(0, n);
    pq.push(start);
    open.insert(v);
    while(!pq.empty()) {
        cur = pq.top();
        pq.pop();
        int x = cur.second.coord.first;
        int y = cur.second.coord.second;
        debug_(x,y);
        cout<<cur.first<<" "<<cur.second.dir<<endl;
        if(x > 0 && grid[x-1][y] == '.' && !open.count(make_pair(x-1, y))) {
          cout<<endl<<"ADDING u"<<x<<" "<<y-1<<endl;
            if(func(x-1, y, 'u')) return 0;
        } else
        if(x < row-1 && grid[x+1][y] == '.' && !open.count(make_pair(x+1, y))) {
          cout<<endl<<"ADDING d"<<x<<" "<<y-1<<endl;
            if(func(x+1, y, 'd')) return 0;
        } else
        if(y > 0 && grid[x][y-1] == '.' && !open.count(make_pair(x, y-1))) {
            cout<<endl<<"ADDING l"<<x<<" "<<y-1<<endl;
            if(func(x, y-1, 'l')) return 0;
        } else
        if(y < col-1 && grid[x][y+1] == '.' && !open.count(make_pair(x, y+1))) {
          cout<<endl<<"ADDING r"<<x<<" "<<y-1<<endl;
            if(func(x, y+1, 'r')) return 0;
        }
    }
    cout<<-1;
    return 0;
}
