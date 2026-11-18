class Solution {
public:
    vector<int> maxSubArray(vector<int>& nums) {
        long long maxSum = nums[0], currSum = nums[0];
        int start = 0, end = 0, tempStart = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (currSum + nums[i] < nums[i]) {
                currSum = nums[i];
                tempStart = i;
            } else {
                currSum += nums[i];
            }

            int currLen = i - tempStart + 1;
            int bestLen = end - start + 1;

            if (currSum > maxSum ||
                (currSum == maxSum && currLen > bestLen)) {
                maxSum = currSum;
                start = tempStart;
                end = i;
            }
        }

        return vector<int>(nums.begin() + start, nums.begin() + end + 1);
    }
};
