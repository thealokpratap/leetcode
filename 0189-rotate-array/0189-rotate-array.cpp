class Solution {
public:
    void reversearr(vector<int>& nums, int low, int  high, int m) {
        while (low < high) {
            swap(nums[low], nums[high]);
            low++;
            high--;
        }
    }
   void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int m=k%n;
        reversearr(nums, 0, n-m- 1, m);
        reversearr(nums, n-m, n - 1, m);
        reversearr(nums, 0, n - 1,0);
    }
};