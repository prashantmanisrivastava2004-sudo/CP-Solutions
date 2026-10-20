#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int N;
	while(t--){
	   cin>>N;
	   deque<long long>dq;
	   for(int i=0; i<N; i++){
	       long long x;
	       cin>>x;
	       dq.push_back(x);
	   }
	   int ans=0;
	   while(dq.size()> 1){
	       long long x = dq.front();
	       long long y = dq.back();
	       
	       if(x==y){
	           dq.pop_front();
	           dq.pop_back();
	       }
	       else if(x<y){
	           dq.pop_front();
	           dq.pop_back();
	           dq.push_back(y-x);
	           ans++;
	       }else{
	           dq.pop_front();
	           dq.pop_back();
	           dq.push_front(x-y);
	           ans++;
	       }
	   }
	   cout<<ans<<endl;
	}

}
