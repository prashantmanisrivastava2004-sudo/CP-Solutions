#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int N;
	while(t--){
	    cin>>N;
	    string s;
	    cin>>s;
	    
	    int A_count=0;
	    int B_count =0;
	    int ans=0;
	    for(char c: s){
	        if(c=='A'){
	            A_count++;
	            if(A_count==3){
	                ans++;
	                A_count=0;
	            }
	            B_count=0;
	        }else{
	            B_count++;
	            if(B_count==3){
	                ans++;
	                B_count=0;
	            }
	            A_count=0;
	        }
	    }
	    cout<<ans<<endl;
	}

}
