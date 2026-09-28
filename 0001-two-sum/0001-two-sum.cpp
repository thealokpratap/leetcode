class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;

        
        for (int i = 0; i < n; i++) {
            int req = target - nums[i];
            if (mp[req] != 0) {
                return {mp[req]-1, i};
            }
            else{
                mp[nums[i]]=i+1;
            }
        }
        return{0,0};
    }
};