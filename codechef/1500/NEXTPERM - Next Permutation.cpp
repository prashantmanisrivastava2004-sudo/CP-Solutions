#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    while (k--) {
        vector < int > a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        next_permutation(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            cout << a[i]<<" ";
        }
        cout << "\n";
    }

    return 0;

}