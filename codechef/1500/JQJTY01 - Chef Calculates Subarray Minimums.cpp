vector<int>prev_min(vector<int>&arr){
    int n = arr.size();
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=0; i<n; i++){
        while(st.size()>0 && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]= st.top();
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
            ans[i]= st.top();
        }
        st.push(i);
    }
    return ans;
}
int calculateSumOfSubarrayMinimums(vector<int>& arr) {
    vector<int>left_min = prev_min(arr);
    vector<int>right_min = next_min(arr);
    long long sum =0;
    const int MOD = (1e9+7);
    for(int i=0; i<arr.size(); i++){
        long long left = i-left_min[i];
        long long right = right_min[i]-i;
        sum = (sum+left*right*arr[i])%MOD;
    }
    return sum;
}
