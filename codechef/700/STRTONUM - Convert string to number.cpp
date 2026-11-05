long long stringToNumber(const string& str) {
    long long num = 0;
    for (char c : str) {
        num = num * 10 + (c - '0');
    }
    return num;
}
