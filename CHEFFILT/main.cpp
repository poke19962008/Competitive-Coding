/*Author: SAYAN DAS*/

#define li long int
#define lli long long int
#define MOD 10e9+7

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    
    while(T--){
        li N;
        char imgStr[10];
        li img =0;
        scanf("%s", imgStr);
        scanf("%ld", &N);
        
        li filters[N];
        lli dp[1000][1025];
        
        // Convert to decimal
        // W=1, B=0
        for(int i=0;i<10;i++){
            img = img<<1;
            if(imgStr[i] == 'w') img = img|1;  else img = img|0;
        }
  
//        for(int i=0;i<N;i++){
//            char filtChar[10];
//            int tmp = 0;
//            
//            scanf("%s", filtChar);
//            
//            // Convert to decimal
//            // +=1, -=0
//            for(int j=0;j<10;j++){
//                tmp = tmp<<1;
//                if(filtChar[j] == '+') tmp = tmp|1; else tmp = tmp|0;
//            } 
//            filters[i] = tmp;
//        }
//        cout<<img;
//        for(int i=0;i<N;i++) cout<<filters[i]<<endl;
        
//        for(int i=0;i<=1024;i++) dp[0][i] = 0;
//        dp[0][0]=1;
//        
//        for(int i=1;i<N;i++){
//            for(int j=0;j<=1024;j++){
//                dp[i][j] = dp[i-1][j] + dp[i-1][j^filters[i]];
//            }
//        }
        
//        for(int i=0;i<=1024;i++) cout<<i<<" : "<<dp[N-1][i]<<endl;
        
      
    }

    return 0;
}

