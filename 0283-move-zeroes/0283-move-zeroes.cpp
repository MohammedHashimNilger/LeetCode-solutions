class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0;
        for(int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            if(nums[i] != 0) {
                temp = nums[nonZeroIndex];
                nums[nonZeroIndex] = nums[i]; 
                nums[i] = temp;

                nonZeroIndex++;
            }
        }
    }
};