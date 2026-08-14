class Solution {
public:
    int findMin(vector<int>& nums) {
        int min;
        sort(nums.begin(),nums.end());
        min=nums[0];
        return min;
    }
};