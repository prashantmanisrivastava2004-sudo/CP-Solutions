#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long N,S;
	    cin>>N>>S;
	    long long A= 0;
	    if(S>0){
	        A =(S+3)/4;
	    }
	    long long B = 4*A-S;
	    long long ans = A+B;
	    if(ans>N || A>N || B<0){
	        cout<<-1<<endl;
	    }else{
	        cout<<ans<<endl;
	    }
	}

}
