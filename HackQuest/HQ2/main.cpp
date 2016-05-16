/*Author: SAYAN DAS*/

#include <iostream>
#define MOD 1000000009
#define ll long long
using namespace std;

ll func[5002];
ll dp[5002][5002];
ll mem[5002];



void startdp(){
	for (int i = 1; i <= 5000; i++)
		dp[i][0] = dp[i][i] = 1;
	for (int i = 2; i <= 5000; i++)
		for (int j = 1; j <= i; j++)
			dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
}

void start(){
	func[0] = func[1] = 1;
	for (int i = 2; i <= 5000; i++){
            for (int j = 1; j <= i; j++)
		func[i] = (func[i] + (func[j - 1] * func[i - j]) % MOD) % MOD;
	}
        
        startdp();
}

int main(){
	start();
	memset(mem, -1, sizeof(mem));
        
	ll t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		if (mem[n] != -1)
			printf("%lld\n", mem[n]);
		else{
			ll ret = 0;
			for (int i = 1; i <= n; i++)
				ret = (ret + dp[n][i] * func[i]) % MOD;
			cout<<ret<<endl;
			mem[n] = ret;
		}
	}
	return 0;
}

