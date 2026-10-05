class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int>arr;
        for(int i=0; i<n; i++){
            if(nums[i]!=val){
                arr.push_back(nums[i]);
            }

        }
        nums=arr;
        int m= nums.size();
        return m;
    
        
        
    }
};