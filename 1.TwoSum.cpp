class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, n = nums.size();
        unordered_map<int, int> comp;
        for(i = 0; i < n; i++) {
            if(comp.find(target - nums[i]) != comp.end()) {
                return{comp[target - nums[i]], i};
            }
            comp[nums[i]] = i;
        }
        return {-1};
    } 
};
