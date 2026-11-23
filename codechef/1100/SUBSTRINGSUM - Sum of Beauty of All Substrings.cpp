int beautySum(const string &s) {
    int n = s.size();
    int total = 0;

    for (int i = 0; i < n; i++) {
        int freq[26] = {0}; // frequency of characters
        for (int j = i; j < n; j++) {
            freq[s[j] - 'a']++; // update frequency
            int maxFreq = 0, minFreq = INT_MAX;
            for (int k = 0; k < 26; k++) {
                if (freq[k] > 0) {
                    maxFreq = max(maxFreq, freq[k]);
                    minFreq = min(minFreq, freq[k]);
                }
            }
            total += (maxFreq - minFreq); // add beauty of substring
        }
    }

    return total;
}

