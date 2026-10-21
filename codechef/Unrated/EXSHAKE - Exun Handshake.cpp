#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,M;
	    cin>>N>>M;
	    vector<int>arr(N);
	    for(int i=0; i<N; i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    long long add = 0;
	    int count =0;
	    for(int i=0; i<N; i++){
	        long long P = add+arr[i];
	        if((P*(P-1)/2)<=M){
	            add += arr[i];
	            count++;
	        }else{
	            break;
	        }
	    }
	    
	    cout<<count<<endl;
	}

}
