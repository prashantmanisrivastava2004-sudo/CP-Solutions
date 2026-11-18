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
	  long long total =0;
	  for(int i=0; i<N; i++){
	      total += arr[i];
	  }
	  long long m = LLONG_MAX;
	  for(int i=0; i<N-1; i++){
	      m = min(m, (long long)arr[i]+arr[i+1]);
	  }
	  cout<<total-m/2<<endl;
	}
    
}
