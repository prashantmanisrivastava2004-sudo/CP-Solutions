#include <iostream>
#include <vector>

using namespace std;

int getDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void solve() {
    int N;
    while (cin >> N) {
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int D;
        cin >> D;

        int ans = -1;
        for (int i = 0; i < N; i++) {
            if (getDigitSum(A[i]) == D) {
                ans = A[i];
                break;
            }
        }
        cout << ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}