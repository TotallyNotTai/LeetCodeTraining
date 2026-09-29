class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        std::vector<int> result_vec(nums.size());
        int first = 0;
        int last = nums.size() - 1;
        int pos = nums.size() - 1;

        while (pos >= 0){
            int a = nums[first] * nums[first];
            int b = nums[last] * nums[last];
            if (a > b){
                result_vec[pos] = a;
                first++;
            } else {
                result_vec[pos] = b;
                last--;
            }
            pos--;
        }

        return result_vec;
    }
};
