#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int N;
	int X;
	while(t--){
	    cin>>N>>X;
	    vector<int>arr(N);
	    vector<int>ans;
	    deque<int>dq; ;
	    for(int i=0; i<N; i++){
	        cin>>arr[i];
	    }
	    //Analyse first window(X) elements of the array.
	    for(int i=0; i<X; i++){
	        while(dq.size()>0 && arr[dq.back()]<=arr[i]){
	            dq.pop_back();
	        }
	        dq.push_back(i);
	    }
	    //push the maximum of the first window in ans.
	   ans.push_back(arr[dq.front()]);
	   
	   
	   //analyse the remaining elements...
	     for(int i=X; i<N; i++){
	         
	         //remove the elements which are not the part of the window using index.
	         while(dq.size()>0 && dq.front()<=i-X){
	             dq.pop_front();
	         }
	         
	         //remove the elements which are smaller in the deque from back
	        while(dq.size()>0 && arr[dq.back()]<=arr[i]){
	            dq.pop_back();
	        }
	        dq.push_back(i);
	        //push the maximum element
	        ans.push_back(arr[dq.front()]);
	    }
	    
	    //print the N-X+1 elements..
	    for(int i=0; i<N-X+1; i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	    
	}

}
