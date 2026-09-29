class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int pos_pointer = 0;
        bool contains_zero = false;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 0 && contains_zero == false) {
                contains_zero = true;
                pos_pointer = i;
            }

            if (nums[i] != 0 && contains_zero == true){
                nums[pos_pointer] = nums[i];
                nums[i] = 0;
                pos_pointer++;
            } else {
                continue;
            }
        }
    }
};
