/*Author: SAYAN DAS*/

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    
    struct previousFreq {
        int a;
        int b;
    };
    
    while(T--){
        int N, ans = 1000, length = 0;
        char str[100];
        
        scanf("%d", &N);
        
        previousFreq dp[102][N];
        
        for(int j=0;j<N;j++){
            scanf("%s", str);
            length = strlen(str);
            
            dp[0][j].a = (str[0] == 'a')?(1):(0); 
            dp[0][j].b = (str[0] == 'b')?(1):(0);
            
            for(int i=1;i<length;i++){
                if(str[i] == 'a'){
                    dp[i][j].a = 1+dp[i-1][j].a;
                    dp[i][j].b = dp[i-1][j].b;
                }
                else{
                    dp[i][j].b = dp[i-1][j].b + 1;
                    dp[i][j].a = dp[i-1][j].a;
                }
            }
            
            int minChars = min(dp[length-1][j].a, dp[length-1][j].b);
            ans = min(ans, minChars);
        }
        
        printf("%d\n", ans);
    }

    return 0;
}

