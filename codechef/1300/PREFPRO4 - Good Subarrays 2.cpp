#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

    unordered_map<long long, long long> mp;
    mp[0] = 1;

    long long sum = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        sum += (x - 1);

        ans += mp[sum];
        mp[sum]++;
    }

    cout << ans << endl;
    return 0;

}
