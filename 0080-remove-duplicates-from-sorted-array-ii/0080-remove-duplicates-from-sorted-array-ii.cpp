class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();

        vector<int>ans;

        
        int curr=nums[0];
        int freq=0;

        for(int i=0; i<n; i++){
            if(nums[i]==curr) {
                freq++;
            }else{
                curr=nums[i];
                freq=1;
            }
            if(freq<=2){
                ans.push_back(nums[i]);
            }
        }

        nums=ans;
        return ans.size();
    }
};