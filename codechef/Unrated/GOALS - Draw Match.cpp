#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int X,Y;
	while(t--){
	    cin>>X>>Y;
	    if(X==0 && Y==0){
	        cout<<"NO"<<endl;
	    }
	    else if(X==Y){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}

}
