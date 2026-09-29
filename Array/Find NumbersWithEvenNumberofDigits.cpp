class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
        int num_even_digit = 0;
        for (int i=0; i<nums.size(); i++){
            int digit_len = log10(nums[i]) + 1;
            if (digit_len % 2 == 0){
                num_even_digit++;
            }
        }
        return num_even_digit;
    }
};
