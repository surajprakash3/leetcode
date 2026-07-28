class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> ans = {-1, -1};

        // Find First Position
        int low = 0, high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans[0] = mid;      // Store answer
                high = mid - 1;    // Search left
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // Find Last Position
        low = 0;
        high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans[1] = mid;      // Store answer
                low = mid + 1;     // Search right
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};