#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
void solve(){
    long long N,L;
    cin>>N>>L;
    //odd length cant split into two parts..
    if(N%2 != 0 || L<2){
        cout<<0<<endl;
        return;
    }
    int n= N/2;
    int l = L/2;
    vector<long long>dp(n+1,0);
    dp[0]=1;
    long long sum = 1;
    for(int i=1; i<=n; i++){
        dp[i] = sum;
        sum = (sum + dp[i])% MOD;
        if(i>=l){
            sum = (sum-dp[i-l] + MOD)% MOD;
        }
    }
    cout<<dp[n]<<endl;
}

int main() {
  int t;
  cin>>t;
  while(t--){
      solve();
  }

}
