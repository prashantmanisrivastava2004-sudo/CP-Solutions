#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int N;
	while(t--){
	    cin>>N;
	    vector<int>arr(N);
	    for(int i=0; i<N; i++){
	        cin>>arr[i];
	    }
	    int sum=0;
	    for(int i=0; i<arr.size(); i++){
	        sum += arr[i];
	    }
	   
	    if(N%2 != 0){
	        cout<<"-1"<<endl;
	    }else{
	        cout<<abs(sum)/2<<endl;
	    }
	}

}
