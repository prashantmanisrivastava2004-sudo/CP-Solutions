#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,K;
	    cin>>N>>K;
	    
	    string s;
	    cin>>s;
	    
	    int ans =0;
	    int prev = -1;
	    int p;
	    for(int i=0; i<N; i++){
	        if(s[i]=='1' && i>prev){
	            p =min(N-1,i+K);
	            prev= p;
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}

}
