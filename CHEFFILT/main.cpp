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
        lli img=0;
        char imgStr[10];
        
        scanf("%s", imgStr);
        scanf("%ld", &N);
        
        int filters[N];
        vector <lli> dp;
        
        // Convert to decimal
        // W=1, B=0
        for(int i=0;i<10;i++){
            img = img<<1;
            if(imgStr[i] == 'w') img = img|1;  else img = img|0;
        }
        
        for(int i=0;i<N;i++){
            char filtChar[10];
            int tmp = 0;
            
            scanf("%s", filtChar);
            
            for(int j=0;j<10;j++){
                tmp = tmp<<1;
                if(filtChar[i] == '+') tmp = tmp|1; else tmp = tmp|0;
            }
            
            filters[i] = tmp;
        }
        
    }

    return 0;
}

