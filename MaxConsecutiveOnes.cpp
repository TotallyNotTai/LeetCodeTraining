class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cons_ones = 0;
        int temp_cons_ones = 0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 1){
                temp_cons_ones++;
            } else {
                temp_cons_ones = 0;
            }
            max_cons_ones = max(max_cons_ones, temp_cons_ones);
        }
    return max_cons_ones;
    }
};
