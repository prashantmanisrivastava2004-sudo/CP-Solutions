#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int N;
    while(t--){
        cin>>N;
        vector<long long >arr(N);
        for(int i=0; i<N; i++){
            cin>>arr[i];
        }
        vector<long long>leftmax(N);
        leftmax[0]=arr[0];
        for(int i=1; i<N; i++){
            leftmax[i] = max(leftmax[i-1], arr[i]);
        }
        vector<long long>rightmax(N);
        rightmax[N-1]= arr[N-1];
        for(int i=N-2; i>=0; i--){
            rightmax[i] = max(rightmax[i+1], arr[i]);
        }
        
        vector<long long>water(N,0);
        for(int i=0; i<N; i++){
            long long minheight = min(leftmax[i], rightmax[i]);
            if(minheight > arr[i]){
                water[i] = minheight-arr[i];
            }else{
                water[i] = 0;
            }
        }
        long long max_section = 0;
        long long curr = 0;
        for(int i=0; i<N; i++){
            if(water[i] > 0){
                curr += water[i];
            }else{
                max_section = max(max_section,curr);
                curr =0;
            }
        }
        max_section = max(max_section,curr);
        cout<<max_section<<endl;
    }

}
