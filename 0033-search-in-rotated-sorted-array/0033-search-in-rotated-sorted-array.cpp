
class Solution {
public:

    
    int searchtarget(vector<int>& nums, int low, int high, int target) {

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return -1;
    }

   
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        int i = 1;
        int cnt = 0;

       
        while (i < n && nums[i - 1] < nums[i]) {
            cnt++;
            i++;
        }

       
        if (i == n) {
            return searchtarget(nums, 0, n - 1, target);
        }

        
        int index = searchtarget(nums, 0, cnt, target);

        if (index != -1) {
            return index;
        }

        
        return searchtarget(nums, cnt + 1, n - 1, target);
    }
};
