class Solution {
public:
    std::vector<int> replaceElements(std::vector<int>& arr) {
        int max_value = -1;

        for (int i=arr.size() - 1; i>=0; i--){
            if (arr[i] > max_value){
                int temp_var = arr[i];
                arr[i] = max_value;
                max_value = temp_var;
            } else {
                arr[i] = max_value;
            }
        }

        return arr;
    }
};
