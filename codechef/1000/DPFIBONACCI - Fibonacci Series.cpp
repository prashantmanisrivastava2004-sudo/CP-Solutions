#include <iostream>
#include<vector>
using namespace std;


long long int fib(int n) {
    vector<long long>dp(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<n; i++){
        dp[i]= dp[i-1]+dp[i-2];
    }
   return dp[n-1]; 
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
