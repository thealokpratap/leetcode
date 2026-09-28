class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;

        int sum=0;
        int cnt=0;

        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(sum==k){
                cnt++;
            }
                int req=sum-k;
                if(mpp[req]!=0){
                    cnt+=mpp[req];
                }
            
            mpp[sum]++;
        }
        


        return cnt;
    }
};