#include <bits/stdc++.h>
using namespace std;

vector<int> prev_greater(vector<int>&arr){
    int N = arr.size();
    stack<int>st;
    vector<int>ans(N,-1);
    for(int i=0; i<arr.size(); i++){
        while(st.size()>0 && arr[st.top()]>arr[i]){
            st.pop();
        }
        while(st.size()>0 && st.top()<i-5){
            st.pop();
        }
        if(st.size()==0){
            ans[i] = -1;
        }else{
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}

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
         vector<int>prev = prev_greater(arr);
         int count=0;
         for(int i=0; i<N; i++){
             if(prev[i] == -1){
                 count++;
             }
         }
         cout<<count<<endl;
         
     }
}
