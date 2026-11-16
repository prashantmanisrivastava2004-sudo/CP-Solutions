#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s, r;
	    cin>>s>>r;
	    string M;
	    for(int i=0;  i<5; i++){
	        if(s[i]==r[i]){
	            M += 'G';
	        }else{
	            M += 'B';
	        }
	    }
	    cout<<M<<endl;
	}

}
