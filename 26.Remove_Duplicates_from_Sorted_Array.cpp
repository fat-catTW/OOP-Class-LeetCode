class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int fast = 1;
        int length = nums.size();
        while(fast < length)
        {
            if(nums[slow] != nums[fast])
            {
                slow++;
                nums[slow] = nums[fast];
            }
            fast++;
        }

        return slow+1;
    }
};