#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string A;
	    cin>>A;
	   long long sum =0;
	    for(char c: A){
	        sum += (c-'0');
	    }
	    if(sum %10 ==0){
	        cout<<"Valid"<<endl;
	    }else{
	        cout<<"Invalid"<<endl;
	    }
	}

}
