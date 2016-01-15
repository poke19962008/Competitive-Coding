#include <iostream>
#include <stdio.h>
#include <algorithm>
#define INFI 1000000000
#define MAX(a,b) a>b?a:b
#define MIN(a,b) a<b?a:b
 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, i, j;
        cin>>N>>M;
        int min_col=INFI, min_row=INFI, max_row=-INFI, max_col=-INFI;
        for(i=0; i<N; i++){
            string s;
            cin>>s;
            for(j=0; j<M; j++){
                if(s[j]=='*'){
                    min_col=MIN(min_col, j);
                    max_col=MAX(max_col, j);
                    min_row=MIN(min_row, i);
                    max_row=MAX(max_row, i);
                }
            }
        }
 
        if(max_row==-INFI && max_col==-INFI)
        {
            cout<<"0"<<endl;
            continue;
        }
        int avg_col, avg_row;
        avg_row=(max_row-min_row+1)/2;
        avg_col=(max_col-min_col+1)/2;
 
        cout<<(MAX(avg_row,avg_col))+1<<endl;
    }
} 