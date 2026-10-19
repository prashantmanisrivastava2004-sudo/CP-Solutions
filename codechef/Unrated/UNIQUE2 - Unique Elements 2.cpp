#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int>arr(N);
    vector<int>ans;
    
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    unordered_set<int>st;
    for(int i=0; i<N; i++){
        if(st.find(arr[i])==st.end()){
            cout<<arr[i]<<" ";
            st.insert(arr[i]);
        }
    }
   
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}
