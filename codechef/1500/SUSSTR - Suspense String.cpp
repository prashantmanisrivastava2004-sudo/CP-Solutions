#include <bits/stdc++.h>
using namespace std;

void alice(string &s){
    
    
}

int main() {
	int t;
	cin>>t;
	int N;
	while(t--){
	    cin>>N;
	    string s;
	    cin>>s;
	    deque<char>dq;
	    int l =0;
	    int r = N-1;
	    int turn =0;
	    while(l<=r){
	        
	        if(turn%2==0){
	            char ch = s[l++];
	            if(ch=='0'){
	                dq.push_front(ch);
	            }else{
	                dq.push_back(ch);
	            }
	        }else{
	            char ch = s[r--];
	            if(ch=='1'){
	                dq.push_front(ch);
	            }else{
	                dq.push_back(ch);
	            }
	        }
	        turn++;
	    }
	    for(char ch : dq){
	        cout<<ch;
	    }
	    cout<<endl;
	    
	}

}
