#include <bits/stdc++.h>
using namespace std;

vector<int>prev_min(vector<int>&arr){
    int n = arr.size();
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=0; i<n; i++){
        while(st.size()>0 && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}

vector<int>next_min(vector<int>&arr){
    int n = arr.size();
    vector<int>ans(n,n);
    stack<int>st;
    for(int i=n-1; i>=0; i--){
        while(st.size()>0 && arr[st.top()]>arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}
int largest_hist(vector<int>&arr){
    vector<int>prev = prev_min(arr);
    vector<int>next = next_min(arr);
    long long mx = 0;
    for(int i=0; i<arr.size(); i++){
        int width = next[i]-prev[i]-1;
        long long ans = 1LL*width*arr[i];
        mx = max(mx,ans);
    }
    return mx;
}


int main() {
	int N,M;
	cin>>N>>M;
	vector<vector<int>>Matrix(N,vector<int>(M,0));
	for(int i=0; i<N; i++){
	    for(int j=0; j<M; j++){
	        cin>>Matrix[i][j];
	    }
	}
	vector<int>heights(M,0);
	long long mx = 0;
	for(int i=0; i<N; i++){
	    for(int j=0; j<M; j++){
	        if(Matrix[i][j]==0){
	            heights[j] = 0;
	        }else{
	            heights[j] += Matrix[i][j];
	        }
	        
	    }
	    mx = max(mx, (long long)largest_hist(heights));
	}
	cout<<mx<<endl;

}
