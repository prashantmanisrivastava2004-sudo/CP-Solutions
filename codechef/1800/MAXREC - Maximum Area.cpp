#include <bits/stdc++.h>
using namespace std;

vector<int>prev_small(vector<int>&pref){
    stack<int>st;
    int N = pref.size();
    vector<int>ans(N);
    for(int i=0; i<N; i++){
        while(st.size()>0 && pref[st.top()]>=pref[i]){
            st.pop();
        }
        if(st.size()==0){
            ans[i]= -1;
        }else{
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}

vector<int>next_small(vector<int>&pref){
    stack<int>st;
    int N = pref.size();
    vector<int>ans(N);
    for(int i=N-1; i>=0; i--){
        while(st.size()>0 && pref[st.top()]>=pref[i]){
            st.pop();
        }
        if(st.size()==0){
            ans[i]= N;
        }else{
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}
int largest_hist(vector<int>&pref){
    vector<int>prev = prev_small(pref);
    vector<int>next = next_small(pref);
    long long mx = 0;
    for(int i=0; i<pref.size(); i++){
        int width = next[i]-prev[i]-1;
        long long area = pref[i]*width*1LL;
        mx = max(mx,area);
    }
    return mx;
}

int main() {
	int N, M;
	cin>>N>>M;
	vector<vector<int>>matrix(N,vector<int>(M,-1));
	for(int i=0; i<N; i++){
	    for(int j=0; j<M; j++){
	        cin>>matrix[i][j];
	    }
	}
	long long int mx = 0;
	vector<int>heights(M,0);
	for(int i=0; i<N; i++){
	    for(int j=0; j<M; j++){
	       if(matrix[i][j]==0){
	           heights[j] =0;
	       }else{
	           heights[j] += 1;
	       }
	    }
	     mx = max(mx,(long long)largest_hist(heights));
	}
	cout<<mx<<endl;

}
