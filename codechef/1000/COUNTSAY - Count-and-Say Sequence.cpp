string nextTerm(const string &s) {
    string res = "";
    int n = s.size();
    int count = 1;

    for (int i = 0; i < n; i++) {
        if (i + 1 < n && s[i] == s[i + 1]) {
            count++;
        } else {
            res += to_string(count); // append count
            res += s[i];             // append digit
            count = 1;
        }
    }
    return res;
}

// Recursive count-and-say (very slow)
string countAndSay(int n) {
    if (n == 1) return "1";
    string prev = countAndSay(n - 1); // recursively compute previous term
    return nextTerm(prev);             // generate current term
}
