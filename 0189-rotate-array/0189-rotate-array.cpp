class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //brute
        // int n = nums.size();
        // k = k % n;
        // int prev = nums[n - 1];

        // int ptr = 0;

        // while (k != 0) {
        //     int curr = nums[ptr];
        //     nums[ptr] = prev;
        //     prev = curr;
        //     if (ptr == n - 1) {
        //         k--;
        //         ptr = 0;
        //         prev=nums[n-1];
        //     } else {
        //         ptr++;
        //     }
        // } 
        
        

        //better
        int n=nums.size();
        vector<int>temp(n);
        if(k%n==0)return;

        k=k%n;
        int j=0;

        for(int i=n-k; i<n; i++){
            temp[j]=nums[i];
            j++;
        } 
        for(int i=0; i<n-k; i++){
            temp[j]=nums[i];
            j++;
        } 

        

       
        nums=temp;
    }
};