#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        s = "0"+s;
        s = s.substr(s.size()-2);
        int n = stoi(s);
        cout<<n%20<<endl;
    }

}
