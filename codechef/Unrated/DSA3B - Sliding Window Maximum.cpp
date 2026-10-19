#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N,X;
	    cin>>N>>X;
	    vector<int>arr(N);
	    for(int i=0; i<N; i++){
	        cin>>arr[i];
	    }
	    vector<int>ans;
	    deque<int>dq;
	    for(int i=0; i<X; i++){
	        while(dq.size()>0 && arr[dq.back()]<arr[i]){
	            dq.pop_back();
	        }
	        dq.push_back(i);
	    }
	    ans.push_back(arr[dq.front()]);
	    for(int i=X; i<N; i++){
	        while(dq.size()>0 && dq.front()<=i-X){
	            dq.pop_front();
	        }
	        while(dq.size()>0 && arr[dq.back()]<arr[i]){
	            dq.pop_back();
	        }
	        dq.push_back(i);
	        ans.push_back(arr[dq.front()]);
	    }
	    for(int i=0; i<N-X+1; i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}

}
