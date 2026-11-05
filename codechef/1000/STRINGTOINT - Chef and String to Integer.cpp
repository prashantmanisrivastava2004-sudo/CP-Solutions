int myAtoi(const string &s) {
    int n = s.size();
    int i = 0;

    while (i < n && isspace(s[i])) i++;
    if (i == n) return 0;

    int sign = 1;
    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') sign = -1;
        i++;
    }

    long long result = 0;
    while (i < n && isdigit(s[i])) {
        int d = s[i] - '0';
        if (sign == 1) {
            if (result > (INT_MAX - d) / 10) return INT_MAX;
        } else {
            if (result > ((long long)INT_MAX + 1 - d) / 10) return INT_MIN;
        }
        result = result * 10 + d;
        i++;
    }

    return (int)(result * sign);
}


