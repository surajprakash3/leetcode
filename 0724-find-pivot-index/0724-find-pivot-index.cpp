class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t=0;
        for(int i=0;i<nums.size();i++){
            t+=nums[i];
        }
        int l=0;
        for(int i=0;i<nums.size();i++){
            int r=t-l-nums[i];
            if(l==r)
            return i;
            l+=nums[i];
        }

       return -1; 
    }
};