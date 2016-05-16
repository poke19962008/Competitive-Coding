#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#define lli long long int
using namespace std;

int main(int argc, char const *argv[]){
	#ifndef ONLINE_JUDGE
    	freopen("odd.txt", "r", stdin);
	#endif
	lli T;

	scanf("%lld", &T);
	while(T--){
		string str;
		cin>>str;
		lli len = str.length();
		bool isDouble = true;
		
		if(len == 1) isDouble = false; 
		else{
			int lE, lB, c;
			if(len%2 == 0){ 
				lE = len/2-1; 
				lB = len/2;
	
				c=0;
			}else{  
				if(str[len/2] == str[0]){
					lE = len/2-1;
					lB = len/2;
	
					c=1;
				}else if(str[len/2] == str[len-1]){
					lE = len/2;
					lB = len/2 + 1;
	
					c=1;
				}else{
					lE = len/2 - 1;
					lB = len/2 + 1;
	
					c=0;
				}
			}
	
			for (lli i = lE, j = len-1; i >= 0 ; --i, --j){
				// cout<<str[i]<<" "<<str[j]<<endl;
				// cout<<str<<" ";
	
			 	if(str[i] != str[j]){
			 		if(c == 0){
			 			isDouble = false;
			 			break;
			 		}else{
			 			c --;
			 			if(i == 0 || j == lE) break;
	
			 			if(str[i-1] == str[j]) i--;
			 			else if(str[i] == str[j-1]) j--;
			 			else{
			 				isDouble = false;
			 				break;
			 			}
			 		}
			 	}
			} 
		}

		
		if(isDouble)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}