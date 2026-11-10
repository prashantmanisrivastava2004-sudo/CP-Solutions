class Solution {
public:
    vector<int> findRepeatingAndMissing(const vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int num : arr) {
            freq[num]++;
        }

        int repeating = -1, missing = -1;

        // Find the repeating and missing numbers
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) {
                repeating = i;
            } else if (freq[i] == 0) {
                missing = i;
            }
        }

        return {repeating, missing};
    }
};

