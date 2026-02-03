class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        int i = 1;

        // first increasing
        while (i < n && nums[i] > nums[i - 1]) i++;
        if (i == 1 || i == n) return false;

        // then decreasing
        while (i < n && nums[i] < nums[i - 1]) i++;
        if (i == n) return false;

        // finally increasing
        while (i < n && nums[i] > nums[i - 1]) i++;

        return i == n;
    }
};
