class Solution {
public:
    bool checkIfExist(std::vector<int>& arr) {
        bool result = false;

        for (int i=0; i<arr.size(); i++){
            for (int j=0; j<arr.size(); j++){
                if (arr[i] == arr[j] * 2 && arr[j] != 0){
                    result = true;
                    break;
                }
                if (arr[i] == 0 && arr[j] == 0 && i != j){
                    result = true;
                    break;
                }
            }
        }
        return result;
    }
};
