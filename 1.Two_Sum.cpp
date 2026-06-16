class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexMap;
        int len = nums.size();

        for(int i = 0 ; i < len ; i++){
            if(indexMap.find(target-nums[i]) != indexMap.end()){
                return {i, indexMap[target - nums[i]]};
            }
            indexMap[nums[i]] = i;
        }

        return {0, 0};
    }
};