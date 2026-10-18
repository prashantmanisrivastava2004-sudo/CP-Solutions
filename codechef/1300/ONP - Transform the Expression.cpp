#include <bits/stdc++.h>

using namespace std;


int priority(char ch) {
    if (ch == '^') {
        return 3;
    }
    else if (ch == '*' || ch == '/') {
        return 2;
    } else if (ch == '+' || ch == '-') {
        return 1;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        stack < char > st;
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (isalnum(ch)) {
                ans += ch;
            } else {
                if (ch == '(') {
                    st.push(ch);
                }
                else if (ch == ')') {
                    while (st.size() > 0 && st.top() != '(') {
                        ans += st.top();
                        st.pop();
                    }
                    if(!st.empty()){
                        st.pop(); 
                    }
                   
                }
                else {
                    while (st.size() > 0 && st.top() != '(' && priority(st.top()) >= priority(ch)) {
                        ans += st.top();
                        st.pop();
                    }
                    st.push(ch);
                }
                
            }
            
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        cout << ans << endl;

    }

}