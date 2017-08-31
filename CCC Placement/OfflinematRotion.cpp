#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <array>
#include <algorithm>
#define vec vector<vector<pair<int,int>>>
using namespace std;

vec init(int  n) {
    vec arr(n, vector<pair<int,int>>(n));
    for(int i=0;i<n; i++)
        for(int j=0;j<n;j++)
            arr[i][j] = make_pair(i, j);
    return arr;
}

vec rotate_(vec a, int n) {
    vec rot(n, vector<pair<int,int>>(n));
    for(int i=0, i_=0; i<n; i++, i_++) {
        for(int j=0, j_=n-1; j<n; j++, j_--) {
            rot[i][j] = a[j_][i_];
        }
    }
    return rot;
}

int arr[1000][1000];
int main() {
    int n;
    // #ifndef ONLINE_JUDGE
    //   freopen("test.txt", "r", stdin);
    // #endif

    cin>>n;

    for(int i=0;i<n; i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];

    vector<vec> rotate;
    rotate.push_back(init(n));

    rotate.push_back(rotate_(rotate[0], n));
    rotate.push_back(rotate_(rotate[1], n));
    rotate.push_back(rotate_(rotate[2], n));


    int deg = 0;
    while(true) {
        string opt;
        cin>>opt;

        if(opt[0] == '-') break;
        switch(opt[0]) {
            case 'A':
                int angle;
                cin>>angle;
                deg = (deg+ angle%360)%360;
                break;
            case 'U':
                int x, y, z;
                cin>>x>>y>>z;
                arr[x-1][y-1] = z;
                break;
            case 'Q':
                int x_, y_;
                cin>>x_>>y_;
                pair<int, int> ind = rotate[deg/90][x_-1][y_-1];
                cout<<arr[ind.first][ind.second]<<endl;
                break;
        }
    }


    return 0;
}