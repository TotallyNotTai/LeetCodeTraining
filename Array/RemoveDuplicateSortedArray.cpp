class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int i = 1;
        for (int j=0; j<nums.size(); j++){
            if (nums[i-1] != nums[j]){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
}; 

/*
Solution to both questions in "Deleting Items from Array" and "In-Place Operations"
*/
