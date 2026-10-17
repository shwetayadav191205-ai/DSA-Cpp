
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int count = 0;
            bool alreadyAdded = false;

            for (int j = 0; j < ans.size(); j++) {
                if (ans[j] == nums[i]) {
                    alreadyAdded = true;
                    break;
                }
            }

            if (alreadyAdded) {
                continue;
            }

            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count > n / 3) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
