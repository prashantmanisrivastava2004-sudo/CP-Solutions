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
	    stack<int>st;
	    vector<int>sorted = arr;
	    sort(sorted.begin(),sorted.end());
	    int j=0;
	    for(int i=0; i<N; i++){
	        st.push(arr[i]);
	        while(st.size()>0 && st.top()==sorted[j]){
	            st.pop();
	            j++;
	        }
	    }
	    if(j==N){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
}

}
