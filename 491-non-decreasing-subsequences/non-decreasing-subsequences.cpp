class Solution {
public:
    void backtrack(int start, vector<int>& nums, vector<int>& temp, set<vector<int>>& result) {
        if (temp.size() > 1) {
            result.insert(temp);
        }

        for (int i = start; i < nums.size(); i++) {
            if (temp.empty() || nums[i] >= temp.back()) {
                temp.push_back(nums[i]);
                backtrack(i + 1, nums, temp, result);
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> result;
        vector<int> temp;
        backtrack(0, nums, temp, result);
        return vector<vector<int>>(result.begin(), result.end());
    }
};
