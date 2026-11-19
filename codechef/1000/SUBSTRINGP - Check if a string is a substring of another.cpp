#include <iostream>
#include <string>
using namespace std;

bool isSubstring(const string& S1, const string& S2) {
    int lenS1 = S1.length(), lenS2 = S2.length();
    for (int i = 0; i <= lenS1 - lenS2; i++) {
        bool found = true;
        for (int j = 0; j < lenS2; j++) {
            if (S1[i + j] != S2[j]) {
                found = false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S1, S2;
        cin >> S1 >> S2;
        cout << (isSubstring(S1, S2) ? "YES" : "NO") << endl;
    }
    return 0;
}
