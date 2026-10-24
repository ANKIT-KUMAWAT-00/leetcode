
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int leftMax = nums[0];
        int maxSoFar = nums[0];
        int leftLen = 1;

        for (int i = 1; i < nums.size(); i++) {
            maxSoFar = max(maxSoFar, nums[i]);

            if (nums[i] < leftMax) {
                leftMax = maxSoFar;
                leftLen = i + 1;
            }
        }

        return leftLen;
    }
};
