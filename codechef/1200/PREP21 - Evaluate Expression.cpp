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
	    stack<int>st;
	    for(int i=0; i<N; i++){
	        if(isdigit(s[i])){
	            st.push(s[i]-'0');
	        }else{
	           int a = st.top();
	           st.pop();
	           int b = st.top();
	           st.pop();
	           int ans;
	           if(s[i]=='+'){
	               ans = a+b;
	           }
	           if(s[i]=='-'){
	               ans = b-a;
	           }
	           if(s[i]=='*'){
	               ans = a*b;
	           }
	            st.push(ans);
	        }
	       
	    }
	    cout<<st.top()<<endl;
	}

}
