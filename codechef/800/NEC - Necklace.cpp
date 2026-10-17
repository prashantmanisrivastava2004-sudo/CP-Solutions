#include <bits/stdc++.h>
using namespace std;
void rev(vector<int>&arr, int st, int end){
   while(st<end){
       swap(arr[st],arr[end]);
       st++;
       end--;
   }
}
int main() {
	int t;
	cin>>t;
	int n,k;
	while(t--){
	    cin>>n>>k;
	    vector<int>arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    k = k%n;
	    if(k>0){
	    rev(arr,0,k-1);
	    rev(arr,k, n-1);
	    rev(arr,0,n-1);
	    }
	    for(int i=0; i<n; i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	    
	}

}
