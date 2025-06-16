class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {     // outer loop
            for (int j = i+1; j < nums.size(); j++) { // inner loop
                // iteration

                int sum = nums.at(i) + nums.at(j);
                if (sum == target) {
                    result = {i, j};
                    break;
                }
            }
        }

        return result;
    }
};