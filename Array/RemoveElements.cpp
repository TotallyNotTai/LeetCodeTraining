class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int> pos_vec = {};
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == val){
                pos_vec.push_back(i);
            }
        }
        for (int j=pos_vec.size()-1; j>=0; j--){
            nums.erase(nums.begin() + pos_vec[j]);
        }
        return nums.size();
    }
};
