#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int>arr(N);
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }
        if(N==2){
            cout<<arr[1]-arr[0]<<endl;
        }else{
            long long  mx =0;
            for(int i=0; i<N-2; i++){
                mx += abs(arr[i]);
            }
            mx += arr[N-1]-arr[N-2];
            cout<<mx<<endl;
        }
    }

}
